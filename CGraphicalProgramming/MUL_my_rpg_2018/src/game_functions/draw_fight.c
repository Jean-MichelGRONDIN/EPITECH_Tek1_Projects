/*
** EPITECH PROJECT, 2019
** sqd
** File description:
** qsd
*/

#include "./../../include/rpg.h"

void draw_life_enm(fight_t *fight, sfRenderWindow *window)
{
    sfIntRect new = fight->all_life->stat_life_enm->part;
    sfIntRect save = fight->all_life->stat_life_enm->part;
    int life_lose = fight->pers->sat_enm->hp;

    if ((save.width * life_lose) / fight->pers->sat_enm->hp_max > 0)
        new.width = (save.width * life_lose) / fight->pers->sat_enm->hp_max;
    else
        new.width = 0;
    sfSprite_setTextureRect(fight->all_life->life_enm->sprite, new);
    sfRenderWindow_drawSprite(window, fight->all_life->life_enm->sprite, NULL);
}

void draw_life_player(fight_t *fight, sfRenderWindow *window)
{
    sfIntRect new = fight->all_life->sat_life_player->part;
    sfIntRect save = fight->all_life->sat_life_player->part;
    int life_lose = fight->pers->sat_player->hp;

    if ((save.width * life_lose) / fight->pers->sat_player->hp_max > 0)
        new.width = (save.width * life_lose) / fight->pers->sat_player->hp_max;
    else
        new.width = 0;
    sfSprite_setTextureRect(fight->all_life->life_player->sprite, new);
    sfRenderWindow_drawSprite(
        window, fight->all_life->life_player->sprite, NULL);
}

void draw_innterface(fight_t *fight, sfRenderWindow *window, enm_t *enm)
{
    sfRenderWindow_drawSprite(window, fight->forest->sprite, NULL);
    sfRenderWindow_drawSprite(
        window, fight->all_life->health_enm->sprite, NULL);
    sfRenderWindow_drawSprite(
        window, fight->all_life->health_player->sprite, NULL);
    draw_life_enm(fight, window);
    draw_life_player(fight, window);
    sfRenderWindow_drawSprite(window, fight->pers->player->sprite, NULL);
    sfRenderWindow_drawSprite(window, enm->enm->sprite, NULL);
}

void draw_button(fight_t *fight, sfRenderWindow *window)
{
    int nb = 0;

    while (nb != 4) {
        sfSprite_setTextureRect(
            fight->button->button_fight->sprite,
            fight->button->button_stat->part);
        sfRenderWindow_drawSprite(
            window, fight->button->button_fight->sprite, NULL);
        fight->button = fight->button->next;
        nb++;
    }
}