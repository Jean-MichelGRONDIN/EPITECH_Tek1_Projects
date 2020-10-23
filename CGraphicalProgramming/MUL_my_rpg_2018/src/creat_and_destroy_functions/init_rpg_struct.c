/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** init rpg structure
*/

#include "./../../include/rpg.h"

entities_t *init_entities(void);

rpg_t   *init_rpg_struct(void)
{
    rpg_t   *rpg = malloc(sizeof(*rpg));

    rpg->musics = init_music();
    rpg->player = init_player();
    rpg->entities = init_entities();
    rpg->maps = init_all_maps();
    rpg->time = NULL;
    rpg->cam = init_camera();
    rpg->list = init_all_lists();
    rpg->int_fight = init_all_fight();
    rpg->end = 0;
    rpg->step = 0;
    rpg->inventory = init_inventory();
    rpg->in_menu = init_in_game_menu();
    return (rpg);
}
