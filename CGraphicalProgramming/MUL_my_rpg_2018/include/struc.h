/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** structures of the project
*/

#ifndef __STRUC_H__
#define __STRUC_H__

#include "./include.h"

typedef struct  map_piece {
    int n;
    struct  map_piece   *next;
} map_pieces_t;

typedef struct portal {
    sfFloatRect from;
    sfVector2f  to;
    struct  portal  *next;
} portal_t;

typedef struct entity {
    sfIntRect rect_e;
    sfVector2f pos;
    sfText *ptext;
    struct variables_to_draw *entity_draw;
    struct animation *entity_anim;
} entity_t;

typedef struct  entity_list {
    entity_t   *obj;
    struct items    *item;
    struct  entity_list *next;
} entity_list;

typedef struct my_clock {
    sfClock *clock;
    sfTime  time;
    float   seconds;
} my_clock_t;

typedef struct map {
    map_pieces_t    *map_pieces;
    map_pieces_t    *col_pieces;
    portal_t    *map_tp;
    sfRenderStates  *map_state;
    sfVertexArray   *map;
    sfVertexArray   *col;
} map_t;

typedef struct variables_to_draw {
    sfSprite    *sprite;
    sfTexture   *texture;
} texture_t;

typedef struct stat_texture {
    sfVector2f  pos;
    sfIntRect   part;
} texture_stat_t;

typedef struct animation {
    sfVector2f  pos;
    sfIntRect   part;
    float    anim_delay;
    my_clock_t   *anim_clock;
    float    move_delay;
    my_clock_t   *move_clock;
} animation_t;

typedef struct key_array {
    sfKeyCode id;
    struct  rpg *(*event)(struct rpg *rpg);
    struct  rpg *(*movement)(struct rpg *rpg);
} key_array_t;

typedef struct s_stat_pers {
    int hp_max;
    int hp;
    int dmg;
    int def;
    int lvl;
    int step;
}stat_pers_t;

typedef struct buff_part {
    sfVertex *ver;
    int size;
    sfTexture *textur;
    sfVector2f size_par;
    sfVector2f *speed;
    sfVector2f *pos;
    sfVector2f dir_speed;
    sfColor color;
    my_clock_t *time_life;
    sfRenderStates *state;
}particules_t;

typedef struct part {
    int step;
    void (*parti)(
        particules_t *parti, stat_pers_t *pers, texture_stat_t *pers_y);
} tab_parti_t;

typedef struct fight_button_array {
    stat_pers_t *(*action_fight)(stat_pers_t *attk, stat_pers_t *deff);
    texture_t *button_fight;
    texture_stat_t *button_stat;
    struct fight_button_array *right;
    struct fight_button_array *left;
    struct fight_button_array *down;
    struct fight_button_array *up;
    struct fight_button_array *next;
}fight_button_t;

typedef struct life {
    texture_t *health_player;
    texture_stat_t *health_player_stat;
    texture_t *health_enm;
    texture_stat_t *health_enm_stat;
    texture_t *life_player;
    texture_t *life_enm;
    texture_stat_t *sat_life_player;
    texture_stat_t *stat_life_enm;
}life_t;

typedef struct s_pers {
    stat_pers_t *sat_player;
    stat_pers_t *sat_enm;
    texture_t *player;
    texture_stat_t *st_text_p;
    texture_t *sorcer;
    texture_stat_t *st_text_sor;
    texture_t *snak;
    texture_stat_t *st_text_snak;
    texture_t *blobe;
    texture_stat_t *st_text_bl;
}pers_t;

typedef struct enm {
    stat_pers_t *sat_enm;
    texture_t *enm;
    texture_stat_t *st_text_enm;
    particules_t *parti;
    void (*draw_pa)(
        particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);
}enm_t;

typedef struct fight {
    int step;
    texture_t *forest;
    texture_t *desert;
    texture_stat_t *back_g_stat;
    life_t *all_life;
    pers_t *pers;
    fight_button_t *button;
    key_array_t **move_button;
    particules_t *heal_part;
    particules_t *snarl_part;
    particules_t *fire_part;
    particules_t *elec_part;
    particules_t *blob_part;
    particules_t *snak_part;
    particules_t *sor_part;
    particules_t *sor_bis_part;
    tab_parti_t *lunche_part;
}fight_t;

typedef struct player_direction {
    int dir;
    struct  rpg *(*move_p)(struct rpg *rpg);
} player_move_t;

typedef struct  items {
    char    *item_id;
    int item_type;
    int item_value;
    texture_t   *item_text;
} items_t;

typedef struct  inventory_slots {
    items_t  *item;
    texture_t   *slot_texture;
    sfFloatRect slot_rect;
    struct  inventory_slots *next;
} inv_slots_t;

typedef struct  inventory_events {
    sfKeyCode   inv_id;
    struct  rpg *(*inv_action)(struct rpg *rpg);
} inv_events_t;

typedef struct  musics {
} musics_t;

typedef struct  sounds {
} sounds_t;

typedef struct  player {
    int dir;
    int move;
    int hp;
    int hp_max;
    int lvl;
    int dmg;
    int snake;
    int blobe;
    int sor;
    int speed;
    int defense;
    sfVector2f pos_p;
    sfIntRect rect_p;
    texture_t   *player_texture;
    animation_t *player_anim;
} player_t;

typedef struct  stat_list {
    int type;
    player_t    *(*update)(player_t *, int);
} stats_list_t;


typedef struct  all_entities {
    entity_list    *mobs;
    entity_list    *pnjs;
    entity_list    *chest;
    sfText *text;
    texture_t *rect_font;
} entities_t;

typedef struct  all_maps {
    map_t   *overworld;
} all_maps_t;

typedef struct camera {
    int mode;
    int zoom;
    sfView  *camera;
} camera_t;

typedef struct all_list {
    struct key_array  **event;
    player_move_t   **p_move;
    inv_events_t    **inv_keys;
    stats_list_t    **p_stats_list;
} lists_t;

typedef struct  inventory {
    int status;
    int m_pressed;
    int m_released;
    sfText  *stat_text;
    sfText  *name_text;
    sfFont  *inv_stat_font;
    sfFont  *inv_text_font;
    animation_t *inv_player;
    items_t *m_item;
    texture_t   *font_texture;
    animation_t *font_draw_delay;
    inv_slots_t *equiped;
    inv_slots_t *stock;
} inventory_t;

typedef struct  buttons {
    int action;
    texture_t   *button_text;
    animation_t *button_anim;
} buttons_t;

typedef struct  in_game_menu {
    int status;
    int pressed;
    sfVector2f v_pos;
    buttons_t   *in_buttons;
} in_menu_t;

typedef struct  rpg {
    sfMusic **musics;
    player_t    *player;
    entities_t  *entities;
    all_maps_t  *maps;
    my_clock_t  *time;
    camera_t    *cam;
    lists_t  *list;
    fight_t *int_fight;
    in_menu_t   *in_menu;
    int step;
    int end;
    inventory_t *inventory;
} rpg_t;

#endif
