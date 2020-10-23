/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** set_inventory_positions
*/

#include "rpg.h"

rpg_t   *set_inventory_positions(rpg_t *rpg, sfRenderWindow *window)
{
    sfVector2f  new_pos = init_vector_two_f(0, 0);

    sfSprite_setPosition(rpg->player->player_texture->sprite, new_pos);
    sfView_setCenter(rpg->cam->camera, new_pos);
    sfView_zoom(rpg->cam->camera, (1.20 * rpg->cam->zoom));
    sfRenderWindow_setView(window, rpg->cam->camera);
    rpg->inventory->font_draw_delay->pos.x = -150;
    rpg->inventory->font_draw_delay->pos.y = -150;
    sfSprite_setPosition(rpg->inventory->font_texture->sprite,
        rpg->inventory->font_draw_delay->pos);
    rpg->inventory = set_slots_pos_on_screen(rpg->inventory, new_pos);
    sfSprite_setPosition(rpg->player->player_texture->sprite,
        rpg->inventory->inv_player->pos);
    sfSprite_setTextureRect(rpg->player->player_texture->sprite,
        rpg->inventory->inv_player->part);
    return (rpg);
}

rpg_t   *set_mob_positions(rpg_t *rpg, sfRenderWindow *window)
{
    sfVector2f  new_pos = init_vector_two_f(940, 512);
    sfView_setCenter(rpg->cam->camera, new_pos);
    sfView_zoom(rpg->cam->camera, (1.20 * rpg->cam->zoom));
    sfRenderWindow_setView(window, rpg->cam->camera);
    return (rpg);
}