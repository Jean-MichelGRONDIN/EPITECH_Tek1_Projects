/*
** EPITECH PROJECT, 2019
** CPE_corewar_2018
** File description:
** test_check_comment
*/

#include "asm.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(check_comment_pt_two, check_when_no_error)
{
    char    str[] = ".comment \"toto\"";
    int i = count_until_line_finisher(str, "\"");
    int ret = check_comment_pt_two(str, i);

    cr_assert_eq(ret, 0);
}

Test(check_comment_pt_two, check_when_error, .init=cr_redirect_stderr)
{
    char    str[] = ".comment\"toto\"";
    int i = count_until_line_finisher(str, "\"");
    int ret = check_comment_pt_two(str, i);
    char    output[] = "Invalid instruction.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 1);
}

Test(check_comment, check_missing_comment, .init=cr_redirect_stderr)
{
    char    str[] = "#hello\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "Warning: No comment specified.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 0);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_multiple_comment, .init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name\n.comment \"toto\"\n.comment \"tata\"\nholla!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "The comment can only be defined once.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_not_just_after_name,
.init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name \"titi\"\n#toto\n.comment \"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "The comment must be just after the name.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_if_no_space_so_wrong_instruction,
.init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name \"titi\"\n.comment\"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "Invalid instruction.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_present_without_name,
.init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.comment \"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "The comment must be just after the name.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_present_but_not_specified,
.init=cr_redirect_stderr)
{
    char    str[] = "#hello\n.name\n.comment\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "No comment specified.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_present)
{
    char    str[] = "#hello\n.name\n.comment \"toto\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);

    cr_assert_eq(ret, 0);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_wrong_syntax, .init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name\n.comment toto titi toto\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_comment_misplaced_first_quotes,
.init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name\n.comment toto \"tata\"\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_name, check_comment_misplaced_last_quotes,
.init=cr_redirect_stderr)
{
    char    str[] =
    "#hello\n.name\n.comment \"toto \"tata\nholla bienas noches!";
    char    **file = my_str_to_word_array(str, "\n");
    int ret = check_comment(file);
    char    output[] = "Syntax error.\n";

    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
}

Test(check_comment, check_comment_too_long, .init=cr_redirect_stderr)
{
    char    *str = my_strdup("#hello\n.name\n.comment \"");
    char    *str_two = malloc(sizeof(char *) * (COMMENT_LENGTH + 2));
    char    **file = NULL;
    int ret;
    char    output[] = "The comment is too long.\n";

    str_two = my_memset(str_two, 'o', COMMENT_LENGTH + 1);
    str_two[COMMENT_LENGTH + 1] = '\0';
    str = my_strcat(str, str_two);
    str = my_strcat(str, "\"\nholla\nbienas\nnoches!");
    str_two = free_cleanly_this_str(str_two);
    file = my_str_to_word_array(str, "\n");
    ret = check_comment(file);
    cr_assert_stderr_eq_str(output);
    cr_assert_eq(ret, 84);
    file = free_cleanly_str_tab(file);
    str = free_cleanly_this_str(str);
}