/*
** EPITECH PROJECT, 2019
** CPE_duostumper_1_2018
** File description:
** check what fractal it is
*/

#include "./../include/duo.h"

void    fractal_basic_part_one(char **one, int one_len)
{
    int i = 0;

    while (one[i] != NULL) {
        print_n_time_this_str(one[i], one_len);
        i = i + 1;
        my_putchar('\n');
    }
}

void    fractal_basic_part_two(char **one, char **two)
{
    int n = 0;
    int line = 0;
    int len_one = my_strtab_len(one);

    while (one[line] != NULL) {
        while (n != (len_one / 2)) {
            second_part_print(one[line], two[line], len_one);
            n = n + 1;
        }
        n = 0;
        my_putchar('\n');
        line++;
    }
}

void    fractal_basic(char **av)
{
    char    **one = my_str_to_word_array(av[2], "@");
    char    **two = my_str_to_word_array(av[3], "@");
    int len_one = my_strtab_len(one);

    fractal_basic_part_one(one, len_one);
    fractal_basic_part_two(one, two);
    one = free_cleanly_str_tab(one);
    two = free_cleanly_str_tab(two);
}

int fractal(char **av, int nb)
{
    if (nb == 0)
        my_putstr("#\n");
    if (nb == 1)
        print_fractal_one(av[2]);
    if (nb >= 3)
        fractal_complex(av);
    if (nb == 2)
        fractal_basic(av);
    return (0);
}
