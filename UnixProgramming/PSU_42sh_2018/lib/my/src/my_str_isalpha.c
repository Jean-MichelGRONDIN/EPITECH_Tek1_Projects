/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_str_isalpha_c
** File description:
** return 1 if all characters are only alpha or else 0
*/

int my_str_isalpha(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] < 'A' ||
            (str[index] > 'Z' && str[index] < 'a') ||
            str[index] > 'z') {
            return (0);
        }
        index = index + 1;
    }
    return (1);
}
