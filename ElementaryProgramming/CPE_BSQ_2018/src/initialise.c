/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** function of initialisations
*/

#include <stdlib.h>
#include "./../include/my.h"
#include "./../include/bootstrap.h"

int first_map_line_len(char const *str)
{
    int i = set_at_map(str);
    int less = i;

    while (str[i] != '\n' && str[i] != '\0') {
        i = i + 1;
    }
    return (i - less - 1);
}

position_t  *initialise_position(char const *filepath)
{
    position_t  *position = malloc(sizeof(*position));

    position->str = load_file_in_mem(filepath);
    position->x = 0;
    position->y = 0;
    position->y_max = my_getnbr(position->str);
    position->x_max = first_map_line_len(position->str);
    position->map = load_2d_arr_from_file(position);
    return (position);
}

res_t   *initialise_res(int x, int y, int size)
{
    res_t   *res = malloc(sizeof(*res));

    res->row = y;
    res->col = x;
    res->size = size;
    return (res);
}

index_t *initialise_index(int x, int y)
{
    index_t *index = malloc(sizeof(*index));

    index->cols = x;
    index->rows = y;
    return (index);
}
