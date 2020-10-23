/*
** EPITECH PROJECT, 2018
** CPE_my_pushswap_2018
** File description:
** swap 2 first elements
*/

void    swap(int *list, int size)
{
    int tmp = 0;

    if (size >= 2) {
        tmp = list[0];
        list[0] = list[1];
        list[1] = tmp;
    }
}
