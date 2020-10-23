/*
** EPITECH PROJECT, 2019
** CPE_solostumper_2_2018
** File description:
** first function called
*/

#include "./../include/solo.h"

int find_nb_of_this_char_in_str(char c, char *str)
{
    int i = 0;
    int nb = 0;

    while (str[i] != '\0') {
        if (str[i] == c) {
            nb = nb + 1;
        }
        i = i + 1;
    }
    return (nb);
}

int check_how_many_of_this_char_in_both(char c, char *one, char *two)
{
    int first = find_nb_of_this_char_in_str(c, one);
    int second = find_nb_of_this_char_in_str(c, two);

    if (first != second) {
        write(1, "no anagrams.\n", 13);
        return (0);
    }
    return (1);
}

int try_to_find_anagrams(char *one, char *two)
{
    int i = 0;

    one = my_strlowcase(one);
    two = my_strlowcase(two);
    while (one[i] != '\0') {
        if (check_how_many_of_this_char_in_both(one[i], one, two) == 0) {
            return (0);
        }
        i = i + 1;
    }
    write(1, "anagram!\n", 9);
    return (1);
}

void    start_the_research_of_anagrams(char **av)
{
    int len_one = my_strlen(av[1]);
    int len_two = my_strlen(av[2]);

    if (len_one != len_two) {
        write(1, "no anagrams.\n", 13);
    } else {
        try_to_find_anagrams(av[1], av[2]);
    }
}

int anagram(int ac, char **av)
{
    if (ac != 3) {
        write(2, "Error: not enough arguments.\n", 29);
        return (84);
    }
    start_the_research_of_anagrams(av);
    return (0);
}
