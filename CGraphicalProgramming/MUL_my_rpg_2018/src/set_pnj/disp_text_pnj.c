/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** disp_text_pnj
*/

#include "./../../include/rpg.h"

void disp_text(rpg_t *rpg, entity_t *pnj, sfSprite *sprite,
            sfRenderWindow *window)
{
    sfVector2f scale;
    sfVector2f pos;

    pos.x = rpg->player->player_anim->pos.x - 180;
    pos.y = rpg->player->player_anim->pos.y + 62;
    sfSprite_setPosition(sprite, pos);
    pos.x += 37;
    pos.y += 1;
    scale.x = 0.3;
    scale.y = 0.2;
    sfText_setPosition(pnj->ptext, pos);
    sfSprite_setScale(sprite, scale);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_drawText(window, pnj->ptext, NULL);
}

void draw_text_pnj(sfRenderWindow *window, rpg_t *rpg)
{
    if ((all_collision(rpg->player, rpg->entities->pnjs) == 1 ||
        all_collision(rpg->player, rpg->entities->chest) == 1)
        && rpg->step != 1) {
        sfText_setPosition(rpg->entities->text,
        right_pos(rpg->player->player_anim->pos, -20, -10));
        sfRenderWindow_drawText(window, rpg->entities->text, NULL);
    }
    if (all_collision(rpg->player, rpg->entities->mobs) == 1
        && rpg->step != 1) {
        sfText_setPosition(rpg->entities->text,
        right_pos(rpg->player->player_anim->pos, -20, -10));
        sfRenderWindow_drawText(window, rpg->entities->text, NULL);
    }
    if (rpg->step == 1) {
        disp_text(rpg, found_right_pnj(rpg),
        rpg->entities->rect_font->sprite, window);
    }
}
