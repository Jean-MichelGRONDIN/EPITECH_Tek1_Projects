/*
** EPITECH PROJECT, 2018
** CPE_BSQ_2018
** File description:
** load the map in a 2d array
*/

#include <stdlib.h>
#include "./../include/my.h"
#include "./../include/bootstrap.h"

void    array_2d_disp(char **arr)
{
    int i_cols = 0;
    int i_rows = 0;

    while (arr[i_rows] != NULL) {
        while (arr[i_rows][i_cols] != '\0') {
            my_putchar(arr[i_rows][i_cols]);
            i_cols = i_cols + 1;
        }
        my_putchar('\n');
        i_cols = 0;
        i_rows = i_rows + 1;
    }
}

int try_each_size(position_t *position, index_t *index)
{
    int i = 0;

    while (is_square_of_size(position, index, i)) {
        i = i + 1;
    }
    return (i);
}

res_t   *is_him_the_bigger(res_t *res, index_t *index, int his_size)
{
    if (his_size > res->size) {
        res->size = his_size;
        res->row = index->rows;
        res->col = index->cols;
        return (res);
    }
    if (his_size == res->size) {
        if ((index->rows + index->cols) < (res->row + res->col)) {
            res->size = his_size;
            res->row = index->rows;
            res->col = index->cols;
            return (res);
        }
    }
    return (res);
}

void    find_bsq(position_t *position)
{
    index_t *index = initialise_index(0, 0);
    res_t   *res = initialise_res(0, 0, 0);
    int i = 0;

    while (position->map[index->rows] != NULL) {
        while (position->map[index->rows][index->cols] != '\0') {
            i = try_each_size(position, index);
            res = is_him_the_bigger(res, index, i);
            index->cols = index->cols + 1;
        }
        index->cols = 0;
        index->rows = index->rows + 1;
    }
    position = draw_the_square(position, res);
    array_2d_disp(position->map);
    free_position(position);
    free(index);
    free(res);
}

void    bsq(char const *filepath)
{
    position_t  *position = initialise_position(filepath);

    find_bsq(position);
}
