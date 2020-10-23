/*
** EPITECH PROJECT, 2018
** CPE_pushswap_bootstrap_2018
** File description:
** take a int array and place ints in the good order
*/

void    swap_elem(int *array, int index1, int index2)
{
    int tmp = 0;

    tmp = array[index1];
    array[index1] = array[index2];
    array[index2] = tmp;
}

void    bubble_sort_array(int *array, int size)
{
    int i = 0;

    while ((i + 1) <= size) {
        if (array[i + 1] < array[i]) {
            swap_elem(array, i, (i + 1));
            i = 0;
        } else {
            i = i + 1;
        }
    }
}
