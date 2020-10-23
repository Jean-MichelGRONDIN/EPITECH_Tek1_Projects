/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** create_text_pnj
*/

#include "./../../include/rpg.h"

sfText *set_text_pnj(char *str);

char *text_first_pnj(void)
{
    char *str = my_strdup("Hello ! You were passed out on the beach, ");

    str = my_strcat(str, "so I brought you here.\nI leave your ");
    str = my_strcat(str, "stuff in your inventory, try not to ");
    str = my_strcat(str, " damage it even more this time !");
    return (str);
}

char *text_set_pnj(char *str1, char *str2, char *str3, char *str4)
{
    char *str = my_strdup(str1);

    str = my_strcat(str, str2);
    str = my_strcat(str, str3);
    if (str4 != NULL)
        str = my_strcat(str, str4);
    return (str);
}

entity_list *get_pnj_quest(entity_list *pnjs)
{
    entity_list *idx = pnjs;

    while (idx != NULL && idx->obj->pos.x != 1364)
        idx = idx->next;
    if (idx == NULL)
        return (NULL);
    return (idx);
}

sfText *get_quest_text(rpg_t *rpg)
{
    if (rpg->player->blobe < 5) {
        return (set_text_pnj(
        text_set_pnj("Hello adventurer, I need your help!",
        "\nFollowing the arrival of the witch on our land",
        ", our citizens are afraid.\nSo I need you",
        " to slay five servants near the city !")));
    }
    if (rpg->player->blobe >= 5 && rpg->player->snake < 5) {
        return (set_text_pnj(
        text_set_pnj("Im glad you re still alive !",
        "\nNow, I would like you to go check what ",
        "the witch and her subordinates\n are doing in the desert!",
        NULL)));
    }
    return (set_text_pnj(
    text_set_pnj("Adventurer, the witch kidnapped my daughter and",
    " took her\nto the top of the dungeon before hiding in a house",
    "in the notheast.\nThe only way to get there is to go through",
    " the fishrman's hut.\nSave her, please !!")));
}
