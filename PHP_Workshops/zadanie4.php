<?php
class Calculator {
private $liczba1;
private $liczba2;

public function __construct($liczba1, $liczba2) {
$this->liczba1 = $liczba1;
$this->liczba2 = $liczba2;
}

public function add() {
return $this->liczba1 + $this->liczba2;
}

public function substract() {
return $this->liczba1 - $this->liczba2;
}

public function multiply() {
return $this->liczba1 * $this->liczba2;
}

public function divide() {
if ($this->liczba2 != 0) {
return $this->liczba1 / $this->liczba2;
} else {
return "Nie dzieli się przez zero";
}
}
}
$calculator = new Calculator(15, 12);
echo "Suma: " . $calculator->add() . "\n";
echo "Różnica: " . $calculator->substract() . "\n";
echo "Iloczyn: " . $calculator->multiply() . "\n";
echo "Iloraz: " . $calculator->divide() . "\n";

