/*
** EPITECH PROJECT, 2019
** df
** File description:
** d
*/

#include "./../../include/rpg.h"

texture_stat_t *init_texture_stat(sfIntRect part, sfVector2f pos)
{
    texture_stat_t *new = malloc(sizeof(*new));

    new->part = part;
    new->pos = pos;
    return (new);
}

tab_parti_t *init_lunche_part(void)
{
    tab_parti_t *new = malloc(sizeof(*new) * 3);

    new[0].step = NONEATT;
    new[0].parti = NULL;
    new[1].step = HEAL;
    new[1].parti = &draw_heal;
    return (new);
}

fight_t *init_all_fight_next(fight_t *new)
{
    new->heal_part = ini_heal_part();
    new->snarl_part = ini_snarl_part();
    new->fire_part = ini_fire_part();
    new->blob_part = ini_blobe_part();
    new->elec_part = ini_elec_part();
    new->snak_part = ini_sn_part();
    new->sor_part = ini_sor_one_part();
    new->sor_bis_part = ini_sor_two_part();
    new->lunche_part = init_lunche_part();
    new->step = 0;
    new->pers->sat_player = malloc(sizeof(stat_pers_t));
    new->pers->sat_enm = malloc(sizeof(stat_pers_t));
    return (new);
}

fight_t *init_all_fight(void)
{
    fight_t *new = malloc(sizeof(*new));

    new->forest = init_texture_struc("./assets/forest.jpg");
    new->back_g_stat = init_texture_stat(
        struct_intrect(0, 0, 1920, 1080), struct_vector2f(0, 0));
    new->all_life = init_life();
    new->button = init_all_button();
    new->move_button = init_key_fight();
    set_sprite_stat_for_fight(new);
    new->pers = init_pers();
    new = init_all_fight_next(new);
    return (new);
}
