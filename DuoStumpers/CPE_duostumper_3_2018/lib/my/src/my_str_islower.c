/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_str_islower_c
** File description:
** return 1 if all characters are lowercases or 0 if not
*/

int my_str_islower(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if ((str[index] >= 'a' && str[index] <= 'z')) {
            index = index + 1;
        } else {
            return (0);
        }
    }
    return (1);
}
