/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check norm for file dot c
*/

#include "./../include/my_norm.h"

void    file_c_norm(file_t *files)
{
    char    **lines = get_what_that_file_contain(files->path);

    if (lines != NULL) {
        check_limite_char_by_line(lines, files);
        check_tabulation(lines, files);
        check_indentation(lines, files);
        check_header(lines, files);
        check_comma(lines, files);
        check_function_nb_lines(lines, files);
        check_spaces_at_end_of_lines(lines, files);
        check_equal(lines, files);
        check_while_for_if_return_space_before_braket(lines, files);
        check_functions(lines, files);
        check_nb_functions_in_a_file(lines, files);
        check_comment_inside_a_function(lines, files);
        lines = free_cleanly_str_tab(lines);
    }
    //v2
    //multiple ';' a la suite
    //nb of if else if a la suite
    //missing empty lines between function, include and function, header and include
    //nb de parametre par fonctions
}
