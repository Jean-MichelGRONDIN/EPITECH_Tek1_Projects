/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** test_check_name
*/

#include "asm.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(check_name_pt_two, check_when_no_error)
{
    char    str[] = ".name \"toto\"";
    int i = count_until_line_finisher(str, "\"");
    int ret = check_name_pt_two(str, i);

    cr_assert_eq(ret, 0);
}

Test(check_name_pt_two, check_when_error, .init=cr_redirect_stderr)
{
    char    str[] = ".name\"toto\"";
    int i = count_until_line_finisher(str, "\"");
    int ret = check_name_pt_two(str, i);
    char    output[] = "Invalid instruction.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 1);
}

Test(check_name, check_missing_name, .init=cr_redirect_stderr)
{
    char    str[] = "#hello\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "No name specified.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_multiple_name, .init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name \"toto\"\n.name \"tata\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "The name can only be defined once.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_present_but_not_specified,
.init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.name\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "No name specified.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_present)
{
    char    str[] = "#hello\n.name \"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);

    cr_assert_eq(ret, 0);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_if_no_space_so_wrong_instruction,
.init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name\"titi\"\n.comment \"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "Invalid instruction.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_no_quotes, .init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.name toto tata titi\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_name_misplaced_first_quotes,
.init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.name toto \"tata\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_name_misplaced_last_quotes,
.init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.name \"toto \"tata\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_name(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_name_too_long, .init=cr_redirect_stderr)
{
    char    *str = my_strdup("#hello\n.name \"");
    char    *str_two = malloc(sizeof(char *) * (PROG_NAME_LENGTH + 2));
    char    **file = NULL;
    int ret;
    char    output[] = "The program name is too long.\n";

    str_two = my_memset(str_two, 'o', PROG_NAME_LENGTH + 1);
    str_two[PROG_NAME_LENGTH + 1] = '\0';
    str = my_strcat(str, str_two);
    str = my_strcat(str, "\"\nholla\nbienas\nnoches!");
    str_two = free_cleanly_this_str(str_two);
    file = my_str_to_word_array(str, "\n");
    ret = check_name(file);
    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
    str = free_cleanly_this_str(str);
}