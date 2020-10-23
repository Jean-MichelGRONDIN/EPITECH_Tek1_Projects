/*
** EPITECH PROJECT, 2018
** CPool_bistro-matic_2018
** File description:
** place n character choised in a string
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
