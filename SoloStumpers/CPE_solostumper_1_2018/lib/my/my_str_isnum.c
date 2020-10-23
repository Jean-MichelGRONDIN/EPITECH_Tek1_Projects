/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_str_isnum_c
** File description:
** return 1 if all characters is numeric or else 0
*/

int my_str_isnum(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if ((str[i] < '0' || str[i] > '9') && str[i] != '+' && str[i] != '-'
            && str[i] != '.') {
            return (0);
        }
        i = i + 1;
    }
    return (1);
}
