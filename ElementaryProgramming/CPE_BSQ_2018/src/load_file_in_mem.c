/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_22018
** File description:
** load a content of a file and put it in memory
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include "./../include/my.h"
#include "./../include/bootstrap.h"

char    *load_file_in_mem(char const *filepath)
{
    int fd = fs_open_file(filepath);
    struct stat *size = malloc(sizeof(*size));
    char    *file_content;

    stat(filepath, size);
    file_content = malloc(sizeof(char) * (size->st_size + 1));
    my_memset(file_content, '~', (size->st_size - 1));
    file_content[size->st_size] = '\0';
    read(fd, file_content, size->st_size);
    file_content[size->st_size] = '\0';
    close(fd);
    free(size);
    return (file_content);
}

int set_at_map(char const *str)
{
    int i = 0;

    while (str[i] != '\n') {
        i = i + 1;
    }
    return (i + 1);
}

char    **load_2d_arr_from_file(position_t *position)
{
    index_t *index = malloc(sizeof(*index));
    char    **tab = mem_alloc_2d_array(position->y_max, position->x_max);
    int i = set_at_map(position->str);

    index->rows = 0;
    index->cols = 0;
    while (position->str[i] != '\0') {
        if (position->str[i] == '\n') {
            tab[index->rows][index->cols] = '\0';
            index->rows = index->rows + 1;
            index->cols = 0;
        } else {
            c_filter(position->str[i]);
            tab[index->rows][index->cols] = position->str[i];
            index->cols = index->cols + 1;
        }
        i = i + 1;
    }
    return (tab);
}

int is_square_of_size(position_t *position, index_t *index, int square_size)
{
    int i_col = index->cols;
    int i_row = index->rows;
    int const col_max = index->cols + square_size;
    int const row_max = index->rows + square_size;

    if ((row_max) >= position->y_max)
        return (0);
    if ((col_max) >= position->x_max)
        return (0);
    while (i_row <= row_max && position->map[i_row] != NULL) {
        while (i_col <= col_max && position->map[i_row][i_col] == '.') {
            i_col = i_col + 1;
        }
        if (position->map[i_row][i_col] != '.')
            return (0);
        i_row = i_row + 1;
        i_col = index->cols;
    }
    return (1);
}

position_t  *draw_the_square(position_t *position, res_t *res)
{
    int i_col = res->col;
    int i_row = res->row;
    int const col_max = res->col + res->size;
    int const row_max = res->row + res->size;

    if (res->size < 2) {
        if (position->x_max != 1 && position->y_max != 1) {
            return (position);
        }
    }
    while (i_row <= row_max) {
        while (i_col <= col_max) {
            position->map[i_row][i_col] = 'x';
            i_col = i_col + 1;
        }
        i_row = i_row + 1;
        i_col = res->col;
    }
    return (position);
}
