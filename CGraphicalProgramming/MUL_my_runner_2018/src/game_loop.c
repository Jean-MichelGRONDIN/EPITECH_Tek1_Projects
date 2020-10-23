/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** the loop of the game
*/

#include "./../include/runner.h"

void    game_loop(ground_t **backg, ground_t **player,
    ground_t **obstacles, map_t *world)
{
    sfRenderWindow  *window = create_my_window(1920, 1080, 60);
    sfEvent *event = malloc(sizeof(*event));
    my_clock_t  **time = init_all_clocks_infinite_mode();
    rulers_t    *rules = init_rulers();

    init_musics(rules->music);
    while (sfRenderWindow_isOpen(window) && rules->lose == 0) {
        time = basic_game_actions(window, time, backg);
        receive_events(window, player, event);
        is_it_obstacle_time(window, obstacles, world, rules);
        player_animation(window, player, time);
        do_him_touch_the_obstacles(player[RUNNER], obstacles, rules);
        display_real_time_score(window, 0, 0, rules);
    }
    final_window(window, event, rules);
    free_args_from_usual(backg, player, obstacles, world);
    free_internal_variables(event, time, rules);
}
