/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** takes the first elem on the list and puts it at the end of the list
*/

void    rotate_left(int *array, int size)
{
    int tmp = array[0];
    int i = 0;

    while ((i + 1) <= size) {
        array[i] = array[i + 1];
        i = i + 1;
    }
    array[size - 1] = tmp;
}
