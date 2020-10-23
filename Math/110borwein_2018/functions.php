<?php

function print_usage()
{
    printf("USAGE\n");
    printf("    ./110botwein n\n\n");
    printf("DESCRIPTION\n");
    printf("    n   constant defining the integral to be computed\n");
}

function do_calc_y($n, $x)
{
    $k = 0;
    $res = 1;

    if ($x == 0)
        return ($res);
    while ($k != $n + 1) {
        $res *= (sin($x / (2 * $k + 1))) / ($x / (2 * $k + 1));
        $k++;
    }
    return ($res);
}

function simpson($arg)
{
    $arg = intval($arg);
    $res = 0.0;

    for ($i = 0; $i != 5000; $i += 0.5) {
        $res += (0.5 / 6) * (( do_calc_y($arg, $i)) + (4 * do_calc_y($arg, $i + 0.25)) + do_calc_y($arg, $i + 0.5));
    }
    printf("Simpson:\n");
    printf("I%d = %.10f\n", $arg, $res);
    printf("diff = %.10f\n", abs(M_PI_2 - $res));
    return (0);
}

function trapez($arg)
{
    $arg = intval($arg);
    $res = 0.0;

    for ($i = 0; $i != 5000; $i += 0.5) {
        $res += (do_calc_y($arg, $i) + do_calc_y($arg, $i + 0.5)) * 0.5 / 2;
    }
    printf("Trapezoidal:\n");
    printf("I%d = %.10f\n", $arg, $res);
    printf("diff = %.10f\n\n", abs(M_PI_2 - $res));
    return (0);
}

function midpoint($arg)
{
    $arg = intval($arg);
    $res = 0.0;

    for ($i = 0; $i != 5000; $i += 0.5) {
        $res += (do_calc_y($arg, ($i + 0.25)) * 0.5);
    }
    printf("Midpoint:\n");
    printf("I%d = %.10f\n", $arg, $res);
    printf("diff = %.10f\n\n", abs(M_PI_2 - $res));
    return (0);
}

function initialise($arg)
{
    $int = intval($arg);
    $float = floatval($arg);

    if (is_numeric($arg) == FALSE) {
        fprintf(STDERR, "Error n must be numeric !\n");
        return (84);
    }
    if ($int != $float) {
        fprintf(STDERR, "Error n must be an integer !\n");
        return (84);
    }
    if ($int < 0) {
        fprintf(STDERR, "Error n must be greater or equal to 0 !\n");
        return (84);
    }
    $arg = intval($arg);

    midpoint($arg);
    trapez($arg);
    simpson($arg);
    return (0);
}

function main($argc, $argv)
{
    if ($argc != 2) {
        fprintf(STDERR, "Error wrong number of argument !\n");
        return (84);
    }
    if ($argv[1] == "-h") {
        print_usage();
        return (0);
    }
    return (initialise($argv[1]));
}
?>