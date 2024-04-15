<?php
class Student {
    private $name;

    public function __construct($name) {
        $this->name = $name;
    }

    public function getName() {
        return $this->name;
    }

    public function setName($name) {
        $this->name = $name;
    }

    public static function withID($name, $id) {
        $student = new Student($name);
        $student->id = $id;
        return $student;
    }

    public static function withSecondName($name, $secondName) {
        $student = new Student($name);
        $student->secondName = $secondName;
        return $student;
    }
}



