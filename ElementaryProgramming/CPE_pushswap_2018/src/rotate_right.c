/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** takes the last elem on the list and places it at the beginning of the list
*/

void    rotate_right(int *array, int size)
{
    int tmp = array[size - 1];
    int i = size - 1;

    while ((i - 1) >= 0) {
        array[i] = array[i - 1];
        i = i - 1;
    }
    array[0] = tmp;
}
