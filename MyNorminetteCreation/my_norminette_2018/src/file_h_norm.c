/*
** EPITECH PROJECT, 2019
** my_norm_checker
** File description:
** check norm for file dot h
*/

#include "./../include/my_norm.h"

void    file_h_norm(file_t *files)
{
    char    **lines = get_what_that_file_contain(files->path);

    if (lines != NULL) {
        check_limite_char_by_line(lines, files);
        check_tabulation(lines, files);
        check_indentation(lines, files);
        check_header(lines, files);
        check_comma(lines, files);
        check_spaces_at_end_of_lines(lines, files);
        check_equal(lines, files);
        check_functions(lines, files);
        check_comment_in_headers(lines, files);
        lines = free_cleanly_str_tab(lines);
    }
}
