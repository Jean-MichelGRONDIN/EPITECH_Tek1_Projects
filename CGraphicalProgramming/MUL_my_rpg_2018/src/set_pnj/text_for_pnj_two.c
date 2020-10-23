/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** text_for_pnj
*/

#include "./../../include/rpg.h"

char *text_first_pnj(void);

void put_in_list(entity_t *elem, entity_list **list);

entity_list *get_all_chest(void);

sfText *set_text_pnj(char *str);

entity_t *set_entity(float x, float y, char *str, char *file);

sfText *set_text(char *str);

char *text_set_pnj(char *str1, char *str2, char *str3, char *str4);

texture_t   *init_texture_struc(char *path);

entity_list *get_pnj_two(entity_list *entities)
{
    put_in_list(set_entity(735, 1910,
        "You re seeking the mayor ? He is in the yellow house!"
        , "./assets/princess.png"), &entities);
    put_in_list(set_entity(757, 2031,
        "You are new here?\nThe mayor can easily find a work for you!"
        , "./assets/heroes2.png"), &entities);
    put_in_list(set_entity(1364, 334, "Hello Adventurer!"
        , "./assets/pecheur.png"), &entities);
    put_in_list(set_entity(1287, 367,
        "Im the assistant of Mr The Mayor!\nHow can I help you?"
        , "./assets/princess.png"), &entities);
    put_in_list(set_entity(512, 2192,
        text_set_pnj("Have you heard about the witch?",
        "\nShe has transformed ",
        "most of the city ",
        "in wild beasts!!"),
        "./assets/heroes30.png"), &entities);
    return (entities);
}

entity_list *get_pnj(entity_list *entities)
{
    entities = get_pnj_two(entities);
    put_in_list(set_entity(611, 1807,
        "Since the witch came to the city, it became really sad.",
        "./assets/player.png"), &entities);
    put_in_list(set_entity(867, 329,
        text_set_pnj("You re here to save me?\n",
        "Oh thank you so much, I am",
        " the mayor's daughter.\nThe city is thankfull to you ",
        "to free us from the witch and I am too !"),
        "./assets/daeneris.png"), &entities);
    return (entities);
}
