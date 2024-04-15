<?php

class Car
{
    private static $ile = 0;
    private $model;
    private $cena;
    private $kurs;

    public function __construct($model, $cena, $kurs)
    {
        $this->model = $model;
        $this->cena = $cena;
        $this->kurs = $kurs;
        self::$ile++;
    }

    public static function getIle()
    {
        return self::$ile;
    }

    public function getModel()
    {
        return $this->model;
    }

    public function setModel($model)
    {
        $this->model = $model;
    }

    public function getCena()
    {
        return $this->cena;
    }

    public function setCena($cena)
    {
        $this->cena = $cena;
    }

    public function getKurs()
    {
        return $this->kurs;
    }

    public function setKurs($kurs)
    {
        $this->kurs = $kurs;
    }

    public function value()
    {
        return $this->cena * $this->kurs;
    }

    public function __toString()
    {
        return "Model: {$this->model}, Cena: {$this->cena} EURO, Kurs: {$this->kurs} złotych";
    }
}

class NewCar extends Car
{
    private $alarm;
    private $radio;
    private $climatronic;

    public function __construct($model, $cena, $kurs, $alarm, $radio, $climatronic)
    {
        parent::__construct($model, $cena, $kurs);
        $this->alarm = $alarm;
        $this->radio = $radio;
        $this->climatronic = $climatronic;
    }

    public function getAlarm()
    {
        return $this->alarm;
    }

    public function setAlarm($alarm)
    {
        $this->alarm = $alarm;
    }

    public function getRadio()
    {
        return $this->radio;
    }

    public function setRadio($radio)
    {
        $this->radio = $radio;
    }

    public function getClimatronic()
    {
        return $this->climatronic;
    }

    public function setClimatronic($climatronic)
    {
        $this->climatronic = $climatronic;
    }

    public function value()
    {
        $value = parent::value();
        if ($this->alarm) {
            $value += $value * 0.05;
        }
        if ($this->radio) {
            $value += $value * 0.075;
        }
        if ($this->climatronic) {
            $value += $value * 0.1;
        }
        return $value;
    }

    public function __toString()
    {
        $carInfo = parent::__toString();
        return "{$carInfo}, Alarm: {$this->alarm}, Radio: {$this->radio}, Climatronic: {$this->climatronic}";
    }
}

class InsuranceCar extends NewCar
{
    private $firstOwner;
    private $years;

    public function __construct($model, $cena, $kurs, $alarm, $radio, $climatronic, $firstOwner, $years)
    {
        parent::__construct($model, $cena, $kurs, $alarm, $radio, $climatronic);
        $this->firstOwner = $firstOwner;
        $this->years = $years;
    }

    public function getFirstOwner()
    {
        return $this->firstOwner;
    }

    public function setFirstOwner($firstOwner)
    {
        $this->firstOwner = $firstOwner;
    }

    public function getYears()
    {
        return $this->years;
    }

    public function setYears($years)
    {
        $this->years = $years;
    }

    public function value()
    {
        $value = parent::value();
        $value -= $value * ($this->years * 0.01);
        if ($this->firstOwner) {
            $value -= $value * 0.05;
        }
        return $value;
    }

    public function __toString()
    {
        $carInfo = parent::__toString();
        return "{$carInfo}, First Owner: {$this->firstOwner}, Years: {$this->years}";
    }
}

session_start();

if (!isset($_SESSION['carList'])) {
    $_SESSION['carList'] = [];
}

function addCar($car)
{
    $_SESSION['carList'][] = $car;
}

function removeCar($index)
{
    if (isset($_SESSION['carList'][$index])) {
        unset($_SESSION['carList'][$index]);
        $_SESSION['carList'] = array_values($_SESSION['carList']);
    }
}

function calculatePrice($index)
{
    if (isset($_SESSION['carList'][$index])) {
        $car = $_SESSION['carList'][$index];
        $price = $car->value();
        return number_format($price, 2, ',', ' ');
    }
    return '';
}

function getCarDetails($index)
{
    if (isset($_SESSION['carList'][$index])) {
        $car = $_SESSION['carList'][$index];
        return (string)$car;
    }
    return '';
}

if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    if (isset($_POST['carType'])) {
        $carType = $_POST['carType'];

        if ($carType === 'Car') {
            $model = $_POST['model'];
            $cena = $_POST['cena'];
            $kurs = $_POST['kurs'];
            $car = new Car($model, $cena, $kurs);
            addCar($car);
        } elseif ($carType === 'NewCar') {
            $model = $_POST['model'];
            $cena = $_POST['cena'];
            $kurs = $_POST['kurs'];
            $alarm = isset($_POST['alarm']);
            $radio = isset($_POST['radio']);
            $climatronic = isset($_POST['climatronic']);
            $car = new NewCar($model, $cena, $kurs, $alarm, $radio, $climatronic);
            addCar($car);
        } elseif ($carType === 'InsuranceCar') {
            $model = $_POST['model'];
            $cena = $_POST['cena'];
            $kurs = $_POST['kurs'];
            $alarm = isset($_POST['alarm']);
            $radio = isset($_POST['radio']);
            $climatronic = isset($_POST['climatronic']);
            $firstOwner = isset($_POST['firstOwner']);
            $years = $_POST['years'];
            $car = new InsuranceCar($model, $cena, $kurs, $alarm, $radio, $climatronic, $firstOwner, $years);
            addCar($car);
        }
    } elseif (isset($_POST['calculatePrice'])) {
        $index = $_POST['calculatePrice'];
        $price = calculatePrice($index);
        echo "Cena samochodu: {$price} złotych";
    } elseif (isset($_POST['removeCar'])) {
        $index = $_POST['removeCar'];
        removeCar($index);
    }
}

?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>Formularz Samochodowy</title>
</head>
<body>
<h1>Formularz Samochodowy</h1>

<h2>Ilość Samochodów: <?php echo Car::getIle(); ?></h2>

<h3>Dodaj Samochód</h3>
<form method="POST">
    <label for="carType">Typ Samochodu:</label>
    <select name="carType">
        <option value="Car">Car</option>
        <option value="NewCar">New Car</option>
        <option value="InsuranceCar">Insurance Car</option>
    </select>
    <br><br>
    <label for="model">Model:</label>
    <input type="text" name="model" required>
    <br><br>
    <label for="cena">Cena (EURO):</label>
    <input type="number" name="cena" required>
    <br><br>
    <label for="kurs">Kurs (złoty za EURO):</label>
    <input type="number" name="kurs" required>
    <br><br>
    <label for="alarm">Alarm:</label>
    <input type="checkbox" name="alarm">
    <br><br>
    <label for="radio">Radio:</label>
    <input type="checkbox" name="radio">
    <br><br>
    <label for="climatronic">Climatronic:</label>
    <input type="checkbox" name="climatronic">
    <br><br>
    <label for="firstOwner">First Owner:</label>
    <input type="checkbox" name="firstOwner">
    <br><br>
    <label for="years">Liczba lat:</label>
    <input type="number" name="years" required>
    <br><br>
    <input type="submit" value="Dodaj Samochód">
</form>

<h3>Lista Samochodów</h3>
<ul>
    <?php foreach ($_SESSION['carList'] as $index => $car): ?>
        <li>
            <?php echo $car; ?>
            <form method="POST" style="display: inline-block;">
                <input type="hidden" name="calculatePrice" value="<?php echo $index; ?>">
                <input type="submit" value="Oblicz Cenę">
            </form>
            <form method="POST" style="display: inline-block;">
                <input type="hidden" name="removeCar" value="<?php echo $index; ?>">
                <input type="submit" value="Usuń">
            </form>
            <form action="details.php" method="POST" style="display: inline-block;">
                <input type="hidden" name="carDetails" value="<?php echo $index; ?>">
                <input type="submit" value="Szczegóły">
            </form>
        </li>
    <?php endforeach; ?>
</ul>

</body>
</html>

