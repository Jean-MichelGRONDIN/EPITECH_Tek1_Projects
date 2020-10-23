/*
** EPITECH PROJECT, 2019
** CPE_matchstick_2018
** File description:
** print a string on the err output
*/

void    my_pcharerr(char c);

void    my_pstrerr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_pcharerr(str[i]);
        i = i + 1;
    }
}
