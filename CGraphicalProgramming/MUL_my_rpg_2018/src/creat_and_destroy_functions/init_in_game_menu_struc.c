/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_in_game_struc
*/

#include "rpg.h"

buttons_t   *init_in_menu_buttons_pt_two(buttons_t *new)
{
    sfVector2f pos = init_vector_two_f(860, 600);
    sfIntRect   rect = init_int_rect(0, 202, 0, 90);

    new[2].button_text = init_texture_struc("assets/Exit.png");
    sfSprite_setPosition(new[2].button_text->sprite, pos);
    new[2].button_anim = init_anim_struc(pos, rect, -1, -1);
    return (new);
}

buttons_t   *init_in_menu_buttons(void)
{
    buttons_t   *new = malloc(sizeof(*new) * 3);
    sfVector2f  pos = init_vector_two_f(860, 400);
    sfIntRect   rect = init_int_rect(0, 202, 0, 90);

    new[0].button_text = init_texture_struc("assets/Play.png");
    sfSprite_setPosition(new[0].button_text->sprite, pos);
    new[0].button_anim = init_anim_struc(pos, rect, -1, -1);
    pos = init_vector_two_f(860, 500);
    new[1].button_text = init_texture_struc("assets/menu.png");
    sfSprite_setPosition(new[1].button_text->sprite, pos);
    new[1].button_anim = init_anim_struc(pos, rect, -1, -1);
    new = init_in_menu_buttons_pt_two(new);
    return (new);
}

in_menu_t   *init_in_game_menu(void)
{
    in_menu_t   *new = malloc(sizeof(*new));

    new->v_pos = init_vector_two_f(940, 512);
    new->status = NO;
    new->in_buttons = init_in_menu_buttons();
    return (new);
}