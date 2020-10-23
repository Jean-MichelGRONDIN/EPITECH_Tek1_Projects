/*
** EPITECH PROJECT, 2019
** 105torus_2018
** File description:
** return 0 if it's not a integer or 1 of it's an integer
*/

int my_str_is_int(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '+' && str[i] != '-') {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
