/*
** EPITECH PROJECT, 2018
** my_putstr_c
** File description:
** display one by one the characters of a string
*/

void    my_putchar(char c);

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}
