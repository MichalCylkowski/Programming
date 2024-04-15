<?php
trait Counter {
    public static $c = 0;

    public function inc() {
        self::$c++;
    }
}

class Counter1 {
    use Counter;
}

class Counter2 {
    use Counter;
}

$object1 = new Counter1();
$object1->inc();
echo Counter1::$c." ";

$object1->inc();
echo Counter1::$c." ";

$object1->inc();
echo Counter1::$c." ";

echo ", Drugi licznik: ";

$object2 = new  Counter2();
$object2->inc();
echo Counter2::$c;



