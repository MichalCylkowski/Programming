<?php
trait Hello {
    public function sayHello() {
        echo 'Hello ';
    }
}

trait World {
    public function sayWorld() {
        echo 'World';
    }
}

class  HelloWorld{
    use Hello, World;
}
$greeting = new HelloWorld();
$greeting->sayHello();
$greeting->sayWorld();
?>