/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_str_isupper_c
** File description:
** return 1 if every characters are upper case or else returne 0
*/

int my_str_isupper(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') {
            index = index + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
