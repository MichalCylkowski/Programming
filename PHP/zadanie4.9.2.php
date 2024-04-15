<!DOCTYPE html>
<html>
<head>
    <title>Formularz rejestracyjny</title>
</head>
<body>
<?php
// funkcja sprawdzająca poprawność hasła
function validate_password($password){
    // hasło musi mieć co najmniej 6 znaków
    if(strlen($password) < 6){
        return false;
    }

    // hasło musi zawierać co najmniej jedną wielką literę, cyfrę i znak specjalny
    if(!preg_match('/[A-Z]/', $password) || !preg_match('/[0-9]/', $password) || !preg_match('/[^a-zA-Z0-9]/', $password)){
        return false;
    }

    return true;
}

// funkcja sprawdzająca poprawność danych logowania
function validate_login($email, $haslo) {
    $users = file("dane.txt");
    foreach ($users as $user) {
        list($imie, $nazwisko, $stored_email, $stored_haslo) = explode(";", trim($user));
        if ($email === $stored_email && password_verify($haslo, $stored_haslo)) {
            return true;
        }
    }
    return false;
}

// obsługa logowania
if ($_SERVER['REQUEST_METHOD'] == 'POST' && isset($_POST['login_email']) && isset($_POST['login_haslo'])) {
    $email = $_POST['login_email'];
    $haslo = $_POST['login_haslo'];
    if (validate_login($email, $haslo)) {
        session_start();
        $_SESSION['email'] = $email;
        header('Location: index.php');
        exit();
    } else {
        echo "<p>Niepoprawny email lub hasło.</p>";
    }
}

// obsługa wylogowania
if (isset($_SESSION['email'])) {
    echo "<p>Zalogowany jako " . $_SESSION['email'] . ".</p>";
    echo "<form method='post' action='" . htmlspecialchars($_SERVER['PHP_SELF']) . "'>";
    echo "<input type='hidden' name='logout' value='1'>";
    echo "<input type='submit' value='Wyloguj'>";
    echo "</form>";
    if (isset($_POST['logout'])) {
        session_destroy();
        header('Location: index.php');
        exit();
    }
} else {
// sprawdzenie, czy formularz został wysłany
if ($_SERVER['REQUEST_METHOD'] == 'POST') {
// odczytanie danych z formularza
$imie = $_POST['imie'];
$nazwisko = $_POST['nazwisko'];
$email = $_POST['email'];
$haslo = $_POST['haslo'];

// sprawdzenie poprawności hasła
if (!validate_password($haslo)) {
    echo "<p>Hasło musi mieć co najmniej 6 znaków, zawierać co najmniej jedną wielką literę, cyfrę i znak specjalny.</p>";
} else {
// zapisanie danych do pliku tekstowego
    $hash = password_hash($haslo, PASSWORD_DEFAULT);
    $plik = fopen("dane.txt", "a");
    fwrite($plik, "$imie;$nazwisko;$email;$hash\n");
    fclose($plik);

    echo "<p>Rejestracja zakończona pomyślnir</p>";




<form method="post" action="<?php echo htmlspecialchars($_SERVER["PHP_SELF"]);?>">
    <label>Imię:</label>
    <input type="text" name="imie"><br>

    <label>Nazwisko:</label>
    <input type="text" name="nazwisko"><br>

    <label>Email:</label>
    <input type="email" name="email"><br>

    <label>Hasło:</label>
    <input type="password" name="haslo"><br>

    <input type="submit" value="Zarejestruj">
</form>
</body>
</html>

