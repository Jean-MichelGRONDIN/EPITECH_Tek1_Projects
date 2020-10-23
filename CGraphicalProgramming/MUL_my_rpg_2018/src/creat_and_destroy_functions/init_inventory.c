/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init_inventory
*/

#include "rpg.h"

inventory_t *add_begining_items(inventory_t *new)
{
    new->stock = add_item_to_this_inv(new->stock, init_item_armor(3,
        "What's left from my clothes..."));
    new->stock = add_item_to_this_inv(new->stock, init_item_boots(15,
        "Over powered boots asked by Anthony Palasse !"));
    new->stock = add_item_to_this_inv(new->stock, init_item_sword(2,
        "A little knife, i hope it will help."));
    new->stock = add_item_to_this_inv(new->stock, init_item_hearth(5,
        "Love, something that protect you in dark places."));
    return (new);
}

inventory_t *init_inventory_player_image_part(inventory_t *new)
{
    sfVector2f  where = init_vector_two_f(0, 0);
    sfIntRect   what_part = init_int_rect(0, 0, 16, 16);
    float   when = 1.0;
    float   mv_dl = -1;

    new->inv_player = init_anim_struc(where, what_part, when, mv_dl);
    return (new);
}

inventory_t *init_text_and_font_part(inventory_t *new)
{
    sfVector2f name_scale = init_vector_two_f(0.8, 0.8);

    new->stat_text = sfText_create();
    new->name_text = sfText_create();
    sfText_setColor(new->stat_text, (sfColor){200, 0, 0, 255});
    sfText_setColor(new->name_text, (sfColor){0, 0, 255, 255});
    new->inv_stat_font = sfFont_createFromFile("assets/ARCADECLASSIC.TTF");
    new->inv_text_font = sfFont_createFromFile("assets/arialbi.ttf");
    sfText_setFont(new->stat_text, new->inv_stat_font);
    sfText_setFont(new->name_text, new->inv_text_font);
    sfText_setScale(new->name_text, name_scale);
    return (new);
}

inventory_t *init_inventory(void)
{
    inventory_t *new = malloc(sizeof(*new));
    sfVector2f pos = init_vector_two_f(0, 0);
    sfIntRect dim = init_int_rect(-1, -1, -1, -1);

    new->status = NO;
    new->m_pressed = NO;
    new->m_released = NO;
    new->m_item = NULL;
    new = init_text_and_font_part(new);
    new->font_texture = init_texture_struc("assets/inventory.png");
    new->font_draw_delay = init_anim_struc(pos, dim, 1.0, -1);
    new->equiped = init_n_empty_inv_slots(4);
    new->stock = init_n_empty_inv_slots(27);
    new = add_begining_items(new);
    new = init_inventory_player_image_part(new);
    return (new);
}