/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_char_isnum_c
** File description:
** return 1 if the character is numeric or else 0
*/

int my_char_isnum(char const cr)
{
    if (cr < '0' || cr > '9') {
        return (0);
    }
    return (1);
}
