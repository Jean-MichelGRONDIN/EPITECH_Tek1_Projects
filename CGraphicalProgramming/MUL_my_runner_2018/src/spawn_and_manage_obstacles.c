/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** make spawn and manage an obstacle
*/

#include "./../include/runner.h"

ground_t    *do_action(sfRenderWindow *window,
    ground_t *obstacle, int *end, rulers_t *rules)
{
    int speed_max = 20;
    static  int speed = 10;

    if (obstacle->position.x > -100) {
        obstacle->position.x = obstacle->position.x - speed;
        sfRenderWindow_drawSprite(window, obstacle->sprite, NULL);
    } else if (obstacle->position.x <= -100) {
        obstacle->position.x = 1930;
        obstacle->activate = 0;
        *end = 1;
        rules->score = rules->score + 1;
        sfMusic_play(rules->sound);
        if (speed < speed_max) {
            speed = speed + 1;
        }
    }
    sfSprite_setPosition(obstacle->sprite, obstacle->position);
    return (obstacle);
}

void    obstacle_action(sfRenderWindow *window,
    ground_t **obstacles, int *end, rulers_t *rules)
{
    int i = 0;

    while (i != NB_OBS) {
        if (obstacles[i]->activate == 1) {
            obstacles[i] = do_action(window, obstacles[i], end, rules);
        }
        i = i + 1;
    }
}

void    choose_an_obstacle_and_place_it(sfRenderWindow *window,
    ground_t **obs)
{
    int choosed = nb_alea(0, 10);

    obs[choosed]->activate = 1;
    sfRenderWindow_drawSprite(window, obs[choosed]->sprite, NULL);
    sfSprite_setPosition(obs[choosed]->sprite, obs[choosed]->position);
}

void    is_it_obstacle_time_infinite(sfRenderWindow *window,
    ground_t **obstacles, my_clock_t **time, rulers_t *rules)
{
    float   time_before_spawn_max = 0.75;
    static  float   time_before_spawn = 6.75;
    int finished = 0;

    if (finished != 0) {
        if (time_before_spawn < time_before_spawn_max) {
            time_before_spawn = time_before_spawn - 0.1;
        }
        finished = 0;
    }
    if (time[OBSTACLE_APPEAR]->seconds >= time_before_spawn) {
        choose_an_obstacle_and_place_it(window, obstacles);
        sfClock_restart(time[OBSTACLE_APPEAR]->clock);
    }
    obstacle_action(window, obstacles, &finished, rules);
}
