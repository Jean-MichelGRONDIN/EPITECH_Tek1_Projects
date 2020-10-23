/*
** EPITECH PROJECT, 2018
** CPE_pushswap_2018
** File description:
** initialise all lists at the beginning
*/

list_t *initialise_all_lists(int ac, char **av)
{
    list_t  *list = malloc(sizeof(*list));

    list->size_b = 4;
    list->l_b = malloc(sizeof(int)* list->size_b);
    list->size_a = ac - 1;
    list->l_a = ;
}
