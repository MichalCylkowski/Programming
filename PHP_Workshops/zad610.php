<?php
class Student {
    private $name;
    public $secondName;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public static function withID($name, $ID) {
        $student = new Student($name);
        $student->ID = $ID;
        return $student;
    }

    public static function withSecondName($name, $secondName) {
        $student = new Student($name);
        $student->secondName = $secondName;
        return $student;
    }
}
$student1 = new Student("Michał");
echo  $student1->getName() . "\n";

$student2 = Student::withID("Kacper", 69);
echo $student2->getName() . "\n";
echo $student2->ID . "\n";

$student3 = Student::withSecondName("Michał", "Cylkowski");
echo $student3->getName() . "\n";
echo $student3->secondName;
