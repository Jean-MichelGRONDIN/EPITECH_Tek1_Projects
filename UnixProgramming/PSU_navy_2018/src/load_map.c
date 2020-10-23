/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** load the map of the game
*/

#include "./../include/navy.h"

char    **load_map(char *path)
{
    char    **map = NULL;
    char    *file = read_this_file(path);

    if (file == NULL) {
        my_pstrerr("Error can't load the file !\n");
        return (NULL);
    }
    map = my_str_to_word_array(file, "\n ");
    file = free_cleanly_this_str(file);
    return (map);
}
