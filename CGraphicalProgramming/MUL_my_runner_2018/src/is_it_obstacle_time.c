/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** is it the moment to spawn an obstacle , and manage all obstacles
*/

#include "./../include/runner.h"

ground_t    *do_action_finite(sfRenderWindow *window,
    ground_t *obstacle, rulers_t *rules)
{
    int speed_max = 20;
    static  int speed = 10;

    if (obstacle->position.x > -100) {
        obstacle->position.x = obstacle->position.x - speed;
        sfRenderWindow_drawSprite(window, obstacle->sprite, NULL);
    } else if (obstacle->position.x <= -100) {
        obstacle->position.x = 1930;
        obstacle->activate = 0;
        rules->score = rules->score + 1;
        sfMusic_play(rules->sound);
        if (speed < speed_max) {
            speed = speed + 1;
        }
    }
    sfSprite_setPosition(obstacle->sprite, obstacle->position);
    return (obstacle);
}

void    obstacle_action_finite(sfRenderWindow *window,
    ground_t **obstacles, map_t *world, rulers_t *rules)
{
    int i = 0;

    while (i != NB_OBS) {
        if (obstacles[i]->activate == 1) {
            obstacles[i] = do_action_finite(window, obstacles[i], rules);
        }
        i = i + 1;
    }
    world->position = world->position + 10;
}

void    place_this_obstacle(sfRenderWindow *window,
    ground_t **obs, map_t *world)
{
    obs[world->map[world->index][0]]->activate = 1;
    sfRenderWindow_drawSprite(window,
        obs[world->map[world->index][0]]->sprite, NULL);
    sfSprite_setPosition(obs[world->map[world->index][0]]->sprite,
        obs[world->map[world->index][0]]->position);
}

void    is_it_obstacle_time(sfRenderWindow *window,
    ground_t **obstacles, map_t *world, rulers_t *rules)
{
    if (world->map[world->index] != NULL) {
        if (world->position >= world->map[world->index][1]) {
            place_this_obstacle(window, obstacles, world);
            world->index = world->index + 1;
        }
    }
    obstacle_action_finite(window, obstacles, world, rules);
    if (world->map[world->index] == NULL &&
        world->position >= (world->map[world->index - 1][1] + 1920)) {
        rules->lose = -1;
    }
}
