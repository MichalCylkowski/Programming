<?php
trait Sorting {
    public abstract function comparable($x, $y);

    public function isSorted($array) {
        $length = count($array);
        for ($i = 1; $i < $length; $i++) {
            if ($this->comparable($array[$i], $array[$i - 1]) < 0) {
                $this->sortedL = false;
                return;
            }
        }
        $this->sortedL = true;
    }
}
class Sortowanie {
    use Sorting;

    public function comparable($x, $y) {
        return ($x < $y) ? -1 : 1;
    }
}

$CzyPosortowane = new Sortowanie();
$array = [1, 2, 3,];
$CzyPosortowane->isSorted($array);
echo var_export($CzyPosortowane->sortedL);

echo"\n";

$array2 = [3, 2, 1];
$CzyPosortowane->isSorted($array2);
echo var_export($CzyPosortowane->sortedL);