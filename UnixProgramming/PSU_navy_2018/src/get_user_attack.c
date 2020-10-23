/*
** EPITECH PROJECT, 2019
** PSU_navy_2018
** File description:
** ask the attack till the user enter a right one
*/

#include "./../include/navy.h"

char    *get_user_attack(void)
{
    char    *attack = NULL;

    my_putchar('\n');
    while (check_user_attack(attack) == 0) {
        my_putstr("attack: ");
        attack = free_cleanly_this_str(attack);
        attack = get_next_line(0);
        if (attack == NULL)
            return (NULL);
        if (attack[0] != '\n')
            attack[my_strlen(attack) - 1] = '\0';
    }
    return (attack);
}
