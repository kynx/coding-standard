<?php
function() {
    $var = 'foo';
    return function () {
        $bar = 'baz';
    };
};

$x = static function () {
    $foo = 'bar';
};

class StaticClosure
{
    public function __construct()
    {
        (function() {
            $this->foo();
        })();
    }

    public function foo()
    {
        return function () {
            $foo = 'bar';

            return new class() {
                public function __construct()
                {
                    (function() {
                        $this->bar();
                    })();
                }

                public function bar()
                {
                    echo 'foo';
                }
            };
        };
    }

    public function bar()
    {
        return function () {
            return new class($this) {
                public function __construct($parent)
                {
                }
            };
        };
    }

    public function baz()
    {
        (static function() {
            $this->bar();
        })();
    }
}