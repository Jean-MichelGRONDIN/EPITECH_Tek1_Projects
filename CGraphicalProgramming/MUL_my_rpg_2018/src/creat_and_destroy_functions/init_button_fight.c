/*
** EPITECH PROJECT, 2019
** dqs
** File description:
** qds
*/

#include "./../../include/rpg.h"

fight_button_t *link_button(
    fight_button_t *att1, fight_button_t *att2,
    fight_button_t *att3, fight_button_t *att4)
{
    att1->up = NULL;
    att1->down = att3;
    att1->right = att2;
    att1->left = NULL;
    att1->next = att2;
    att2->up = NULL;
    att2->down = att4;
    att2->right = NULL;
    att2->left = att1;
    att2->next = att3;
    att3->up = att1;
    att3->down = NULL;
    att3->right = att4;
    att3->left = NULL;
    att3->next = att4;
    att4->up = att2;
    att4->down = NULL;
    att4->right = NULL;
    att4->left = att3;
    att4->next = att1;
    return (att1);
}

fight_button_t *init_all_button(void)
{
    sfIntRect r = struct_intrect(0, 0, 202, 90);
    fight_button_t *att1;
    fight_button_t *att2;
    fight_button_t *att3;
    fight_button_t *att4;

    att1 = get_att(
        "./assets/tonnerre.png", struct_intrect(202, 0, 202, 90),
        struct_vector2f(700, 750));
    att1->action_fight = &attk_action;
    att2 = get_att(
        "./assets/dracarys.png", r, struct_vector2f(1000, 750));
    att2->action_fight = &fire_action;
    att3 = get_att(
        "./assets/restauration.png", r, struct_vector2f(700, 850));
    att3->action_fight = &heal_action;
    att4 = get_att(
        "./assets/snarl.png", r, struct_vector2f(1000, 850));
    att4->action_fight = &snarl_action;
    return (link_button(att1, att2, att3, att4));
}
