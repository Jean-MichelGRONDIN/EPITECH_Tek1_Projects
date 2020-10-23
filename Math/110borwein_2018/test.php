#!/usr/bin/php
<?php
use PHPUnit\Framework\TestCase;

include 'functions.php';

class test extends TestCase
{
    public function test_with_zero(): void
    {
        $res = do_calc_y(12, 0);
        $this->assertEquals($res, 1);
    }

    public function test_midpoint_v1(): void
    {
        $this->expectOutputString("Midpoint:\nI0 = 1.5707651076\ndiff = 0.0000312192\n\n");
        midpoint(0);
    }
}
?>