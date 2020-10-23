/*
** EPITECH PROJECT, 2019
** rpg
** File description:
** detect collision pnj
*/

#include "./../../include/rpg.h"

int detect_collision_up(player_t *player, entity_t *pnj)
{
    sfIntRect   p;
    sfIntRect   en;

    p.left = player->player_anim->pos.x;
    p.top = player->player_anim->pos.y - player->speed;
    p.width = 16;
    p.height = 16;
    en.left = pnj->pos.x + 3;
    en.top = pnj->pos.y + 3;
    en.width = 10;
    en.height = 11;
    if (sfIntRect_intersects(&p, &en, NULL) == sfTrue)
        return (1);
    return (0);
}

int detect_collision_down(player_t *player, entity_t *pnj)
{
    sfIntRect   p;
    sfIntRect   en;

    p.left = player->player_anim->pos.x;
    p.top = player->player_anim->pos.y + player->speed;
    p.width = 16;
    p.height = 16;
    en.left = pnj->pos.x + 3;
    en.top = pnj->pos.y + 3;
    en.width = 10;
    en.height = 11;
    if (sfIntRect_intersects(&p, &en, NULL) == sfTrue)
        return (1);
    return (0);
}

int detect_collision_left(player_t *player, entity_t *pnj)
{
    sfIntRect   p;
    sfIntRect   en;

    p.left = player->player_anim->pos.x - player->speed;
    p.top = player->player_anim->pos.y;
    p.width = 16;
    p.height = 16;
    en.left = pnj->pos.x + 3;
    en.top = pnj->pos.y + 3;
    en.width = 10;
    en.height = 11;
    if (sfIntRect_intersects(&p, &en, NULL) == sfTrue)
        return (1);
    return (0);
}

int detect_collision_right(player_t *player, entity_t *pnj)
{
    sfIntRect   p;
    sfIntRect   en;

    p.left = player->player_anim->pos.x + player->speed;
    p.top = player->player_anim->pos.y;
    p.width = 16;
    p.height = 16;
    en.left = pnj->pos.x + 3;
    en.top = pnj->pos.y + 3;
    en.width = 10;
    en.height = 11;
    if (sfIntRect_intersects(&p, &en, NULL) == sfTrue)
        return (1);
    return (0);
}
