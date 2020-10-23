/*
** EPITECH PROJECT, 2018
** my_swap_c
** File description:
** swap content of 2 int with their addresses given as parameter
*/

void    my_putchar(char c);

void    my_swap(int *a, int *b)
{
    int interm = 0;

    interm = *a;
    *a = *b;
    *b = interm;
}
