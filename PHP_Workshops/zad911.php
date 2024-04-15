<?php
trait A {
    public function smallTalk() {
        echo 'a';
    }
    public function bigTalk() {
        echo 'A';
    }
}

trait B {
    public function smallTalk() {
        echo 'b';
    }
    public function bigTalk() {
        echo 'B';
    }
}

class Talk {
    use A, B {
        A::smallTalk insteadof B;
        B::bigTalk insteadof A;
    }
}
$talk = new Talk();
$talk->smallTalk();
echo "\n";
$talk->bigTalk();
