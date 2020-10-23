/*
** EPITECH PROJECT, 2019
** CPE_solostumper_2_2018
** File description:
** test for the anagram funtion
*/

#include "./../include/solo.h"
#include <stdlib.h>
#include <criterion/criterion.h>
#include <criterion/redirect.h>

void    redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(anagrams, check_when_anagram, .init=redirect_all_std)
{
    char    **str = malloc(sizeof(char *) * 3);

    str[0] = my_strdup("./anagram");
    str[1] = my_strdup("Rail Safety");
    str[2] = my_strdup("Fairy tales");
    anagram(3, str);
    cr_assert_stdout_eq_str("anagram!\n");
}

Test(anagrams, check_when_no_anagram, .init=redirect_all_std)
{
    char    **str = malloc(sizeof(char *) * 3);

    str[0] = my_strdup("./anagram");
    str[1] = my_strdup("moo");
    str[2] = my_strdup("moon");
    anagram(3, str);
    cr_assert_stdout_eq_str("no anagrams.\n");
}

Test(anagrams, check_when_no_anagram_v2, .init=redirect_all_std)
{
    char    **str = malloc(sizeof(char *) * 3);

    str[0] = my_strdup("./anagram");
    str[1] = my_strdup("Jean-michel");
    str[2] = my_strdup("Jeanpatrick");
    anagram(3, str);
    cr_assert_stdout_eq_str("no anagrams.\n");
}

Test(anagrams, check_when_wrong_number_of_arguments, .init=redirect_all_std)
{
    char    **str = malloc(sizeof(char *) * 2);

    str[0] = my_strdup("./anagram");
    str[1] = my_strdup("Jean-michel");
    anagram(2, str);
    cr_assert_stderr_eq_str("Error: not enough arguments.\n");
}
