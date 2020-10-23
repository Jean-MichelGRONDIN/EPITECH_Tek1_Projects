/*
** EPITECH PROJECT, 2018
** CPool_Day05_2018
** File description:
** returns the first argument raised to the power p
*/

int my_compute_power_rec(int nb, int power)
{
    if (nb >= 2147483647) {
        return (0);
    }
    if (power == 0) {
        return (1);
    } else {
        nb = nb * my_compute_power_rec(nb, power - 1);
    }
    return (nb);
}
