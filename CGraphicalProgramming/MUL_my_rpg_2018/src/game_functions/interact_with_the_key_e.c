/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** interact_with_the_key_e
*/

#include "./../../include/rpg.h"

entity_t *found_right_pnj(rpg_t *rpg);

entity_t *found_right_chest(rpg_t *rpg);

entity_t *get_pnj_quest(entity_list *pnjs);

inventory_t *manage_items_chest(
    entity_list **list, inventory_t *inventory, entity_t *right);

sfText *get_quest_text(rpg_t *rpg);

int get_enm(entity_t *save)
{
    const char *str = sfText_getString(save->ptext);

    if (my_strcmp(str, "snake") == 0)
        return (SNAKE);
    if (my_strcmp(str, "blobe") == 0)
        return (BLOBE);
    if (my_strcmp(str, "sorcer2") == 0)
        return (SORCERT);
    if (my_strcmp(str, "sorcer") == 0)
        return (SORCER);
    return (BLOBE);
}

rpg_t *manage_pnj_when_e(rpg_t *rpg, entity_list *save2)
{
    while (rpg->entities->pnjs != NULL
        && rpg->entities->pnjs->obj->pos.x != 1364) {
        rpg->entities->pnjs = rpg->entities->pnjs->next;
    }
    rpg->player->hp = rpg->player->hp_max;
    rpg->entities->pnjs->obj->ptext = get_quest_text(rpg);
    rpg->entities->pnjs = save2;
    rpg->step = 1;
    return (rpg);
}

rpg_t   *interact_with_the_key_e(rpg_t *rpg)
{
    entity_t *save;
    entity_list *save2 = rpg->entities->pnjs;

    if (rpg->step == 0 && (save = found_right_chest(rpg)) != NULL) {
        rpg->inventory = manage_items_chest(
            &rpg->entities->chest, rpg->inventory, save);
        rpg->step = 2;
    } if (rpg->step == 0 && (save = found_right_pnj(rpg)) != NULL) {
        manage_pnj_when_e(rpg, save2);
    } else
        rpg->step = 0;
    if (rpg->step == 0 && (save = found_right_mob(rpg)) != NULL)
        rpg->step = get_enm(save);
    else if (rpg->step != 1)
        rpg->step = 0;
    return (rpg);
}
