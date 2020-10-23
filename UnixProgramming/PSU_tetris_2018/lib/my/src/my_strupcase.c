/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018 my_strupcase_c
** File description:
** put every charact of every word in upper case
*/

char    *my_strupcase(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 'a' && str[index] <= 'z') {
            str[index] = (str[index] - 32);
        }
        index = index + 1;
    }
    return (str);
}
