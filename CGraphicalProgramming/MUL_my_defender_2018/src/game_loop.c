/*
** EPITECH PROJECT, 2019
** MUL_my_defender_2018
** File description:
** loop of the game
*/

#include "./../include/defender.h"

int game_loop(sfRenderWindow *window)
{
    list_t  *list = init_all_grounds();
    rules_t *rules = init_rules();
    int end = MENU;
    sfEvent events;

    list = init_plant_buttons(list);
    list = add_obj_to_list(init_sun_money(), list);
    while (rules->choice == -1 && sfRenderWindow_isOpen(window)) {
        window_action(window);
        list = global_time_and_wave_management(rules, list);
        list = obj_actions(list, window, rules);
        rules = check_events(window, &events, rules);
        rules = is_it_win(window, list, rules);
    }
    end = rules->choice;
    rules = free_rules(rules);
    list = free_all_the_list(list);
    return (end);
}
