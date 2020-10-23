/*
** EPITECH PROJECT, 2018
** my_put_nbr_c
** File description:
** display number given as parameter
*/

void    my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
    }
    if (nb > 9) {
        my_put_nbr(nb / 10);
    }
    my_putchar((nb % 10) + 48);
    return (0);
}
