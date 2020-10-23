/*
** EPITECH PROJECT, 2018
** CPE_BSQ_bootstrap_22018
** File description:
** load a content of a file and put it in memory
*/

#include "./../include/sokoban.h"

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

char    **load_2d_arr_from_file(world_t *position)
{
    index_t *index = malloc(sizeof(*index));
    char    **tab = alloc_2d_tab(position->y_max, position->line_len);
    int i = 0;

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
    tab[index->rows][index->cols] = '\0';
    return (tab);
}
