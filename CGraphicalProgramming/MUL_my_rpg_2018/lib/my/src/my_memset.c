/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bottstrap_2018
** File description:
** fill n characte of a string by a choosen character
*/

char    *my_memset(char *str, char a, int n)
{
    int i = 0;

    while (i != n) {
        str[i] = a;
        i = i + 1;
    }
    return (str);
}
