/*
** EPITECH PROJECT, 2018
** CPE_n4s_2017
** File description:
** back
*/

#include "n4s.h"
#include <unistd.h>
#include <stdio.h>
#include "my.h"

void    check_dir_back(car_t car)
{
    char    *str = NULL;
    size_t  n = 0;

    if (car.left < car.right) {
        my_putstr("WHEELS_DIR:0.5\n");
        getline(&str, &n, stdin);
    }
    else {
        my_putstr("WHEELS_DIR:-0.5\n");
        getline(&str, &n, stdin);
    }
}

void    car_brake(car_t car)
{
    if (car.middle <= 400)
        forward("0.35");
    else if (car.middle <= 300)
        forward("0.25");
    else if (car.middle <= 150)
        forward("0.10");
}

void    back(car_t car)
{
    char    *str = NULL;
    size_t  n = 0;

    if (car.middle <= 10 || car.left <= 10 || car.right <= 10) {
        check_dir_back(car);
        backward("0.5");
    }
    if (car.middle >= 750)
        forward("0.70");
    else if (car.middle <= 750)
        forward("0.50");
    else
        car_brake(car);
}
