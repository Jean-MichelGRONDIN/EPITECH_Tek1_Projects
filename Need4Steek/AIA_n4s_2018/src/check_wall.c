/*
** EPITECH PROJECT, 2018
** CPE_n4s_2017
** File description:
** check_wall
*/

#include "n4s.h"
#include <unistd.h>
#include <string.h>
#include "my.h"

void    check_wall_close(car_t car)
{
    if (car.middle >= 400) {
        dir("0.25", car.left - car.right);
        return;
    }
    if (car.middle >= 300 || car.left >= 300 || car.right >= 300)
        dir("0.3", car.left - car.right);
    else if (car.middle >= 150 || car.left >= 150 || car.right >= 150)
        dir("0.50", car.left - car.right);
    else
        dir("0.60", car.left - car.right);
}

void    check_wall(car_t car)
{
    if (car.middle >= 1000)
        dir("0.07", car.left - car.right);
    else if (car.middle >= 600)
        dir("0.15", car.left - car.right);
    else
        check_wall_close(car);
}
