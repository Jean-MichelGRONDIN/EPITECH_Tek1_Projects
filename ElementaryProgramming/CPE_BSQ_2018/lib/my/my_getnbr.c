/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018 my_get_nbr
** File description:
** returns a number, sent to the function as a string
*/

#include <stdio.h>
#include <string.h>

int assembl_nbr(int nb_default, int nb)
{
    nb_default = (nb_default * 10) + nb;
    return (nb_default);
}

int find_nb_in_char(char const *str, int index, int nb)
{
    if (str[index] == '\0') {
        return (nb);
    } else if (str[index] > 47 && str[index] < 58) {
        nb = assembl_nbr(nb, (str[index] - 48));
        nb = find_nb_in_char(str, index + 1, nb);
    }
    return (nb);
}

int con_nb_negative_mark(char const *str, int *index, int nb_negative_mark)
{
    if (str[*index] == '-') {
        *index = *index + 1;
        nb_negative_mark = con_nb_negative_mark(
            str, index, nb_negative_mark + 1);
    }
    return (nb_negative_mark);
}

int my_getnbr_part_two(char const *str)
{
    int index = 0;
    int nb = 0;
    int nb_negative_mark = 0;

    nb_negative_mark = con_nb_negative_mark(str, &index, nb_negative_mark);
    if (nb_negative_mark != 0 && (nb_negative_mark % 2) != 0) {
        nb = find_nb_in_char(str, index, nb);
        nb = nb * -1;
    } else {
        nb = find_nb_in_char(str, index, nb);
    }
    return (nb);
}

int my_getnbr(char const *str)
{
    if (str == NULL || str[0] == '\0') {
        return (0);
    } else {
        return (my_getnbr_part_two(str));
    }
}
