<?php
trait ShowParent {
    public function getParent() {
        return get_parent_class($this);
    }
}
class Vehicle {
    use ShowParent;
}

class Car extends Vehicle {}

class Honda extends Car {}

$vehicle = new Vehicle();
echo $vehicle->getParent();

$Car = new Car();
echo $Car->getParent(). "\n";

$Honda = new Honda();
echo $Honda->getParent();
?>