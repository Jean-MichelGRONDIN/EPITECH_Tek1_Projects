/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** print_inventory_stats
*/

#include "rpg.h"

void    print_this_stat_here(inventory_t * inv,
    sfRenderWindow *window, int n, sfVector2f pos)
{
    char    *str = int_to_str(n);

    sfText_setString(inv->stat_text, str);
    sfText_setPosition(inv->stat_text, pos);
    sfRenderWindow_drawText(window, inv->stat_text, NULL);
    str = free_cleanly_this_str(str);
}

void    print_inventory_stats(sfRenderWindow *window,
    player_t *p, inventory_t *inv)
{
    sfVector2f  hp_pos = init_vector_two_f(45, -130);
    sfVector2f  hp_max_pos = init_vector_two_f(45, -110);
    sfVector2f  defense_pos = init_vector_two_f(45, -80);
    sfVector2f  dmg_pos = init_vector_two_f(130, -130);
    sfVector2f  speed_pos = init_vector_two_f(130, -80);

    if (p->hp > p->hp_max)
        p->hp = p->hp_max;
    print_this_stat_here(inv, window, p->hp, hp_pos);
    print_this_stat_here(inv, window, p->hp_max, hp_max_pos);
    print_this_stat_here(inv, window, p->defense, defense_pos);
    print_this_stat_here(inv, window, p->dmg, dmg_pos);
    print_this_stat_here(inv, window, p->speed, speed_pos);
}