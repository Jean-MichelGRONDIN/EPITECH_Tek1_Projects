/*
** EPITECH PROJECT, 2018
** CPool_Day_06_2018 my_strlowercase_c
** File description:
** put every letter of every word in lower case
*/

char    *my_strlowcase(char *str)
{
    int index = 0;

    while (str[index] != '\0') {
        if (str[index] >= 'A' && str[index] <= 'Z') {
            str[index] = (str[index] + 32);
        }
        index = index + 1;
    }
    return (str);
}
