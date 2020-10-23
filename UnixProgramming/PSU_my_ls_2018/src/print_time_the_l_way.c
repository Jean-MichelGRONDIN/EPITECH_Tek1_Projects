/*
** EPITECH PROJECT, 2019
** PSU_my_ls_2018
** File description:
** print time like -l do
*/

#include "./../include/my_ls.h"

void    start_print_time(char *time, int i)
{
    int end = 0;

    while (time[i] != '\0' && end != 2) {
        if (time[i] == ':') {
            end = end + 1;
        }
        if (end < 2) {
            my_putchar(time[i]);
        }
        i = i + 1;
    }
}

void    print_time_the_l_way(char *time)
{
    int i  = 0;
    int start = 0;

    while (time[i] != '\0' && start != 2) {
        if (time[i] >= 'A' && time[i] <= 'Z') {
            start = start + 1;
        }
        if (start == 2) {
            start_print_time(time, i);
        }
        i = i + 1;
    }
}
