/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_str_isnum_c
** File description:
** return 1 if all characters is numeric or else 0
*/

int my_str_isnum(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] < '0' || str[index] > '9') {
            return (0);
        }
        index = index + 1;
    }
    return (1);
}
