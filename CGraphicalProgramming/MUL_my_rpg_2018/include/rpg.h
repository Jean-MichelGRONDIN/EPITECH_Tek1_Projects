/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** header of the prog
*/

#ifndef __RPG_H__
#define __RPG_H__

#include "./include.h"

#include "./enum.h"

#include "./struc.h"

void    display_usage(void);

void    pause_and_print_this_screen(sfRenderWindow *window, char *path);

rpg_t   *in_game_menu_loop(rpg_t *rpg, sfRenderWindow *window);

in_menu_t   *init_in_game_menu(void);

int manage_menu_events(sfRenderWindow *window, sfEvent *event);
int menu_events(sfRenderWindow *window, sfEvent *event, int ret);

buttons_t   *init_menu_buttons(void);

int check_this_menu_button(buttons_t buttons, sfRenderWindow *window,
    int pressed);
int manage_menu_button_events(buttons_t *buttons, sfRenderWindow *window,
    int pressed);

void    waiting_screen(sfRenderWindow *window);

int check_end(int ret);
void    set_view(sfRenderWindow * window);
int menu_loop(sfRenderWindow *window);

void    print_that_item_name(items_t *item, inventory_t *inv,
    sfRenderWindow *window);

rpg_t   *draw_inv_items_names_if_touched(rpg_t *rpg,
    sfRenderWindow *window);

rpg_t   *inv_player_draw_and_anim(rpg_t *rpg, sfRenderWindow *window);

void    print_this_stat_here(inventory_t * inv,
    sfRenderWindow *window, int n, sfVector2f pos);
void    print_inventory_stats(sfRenderWindow *window,
    player_t *p, inventory_t *inv);

rpg_t   *stats_add_this_item(rpg_t *rpg);
rpg_t   *stats_less_this_item(rpg_t *rpg);

player_t    *update_stats_with_this(player_t *p, stats_list_t **list,
    int new_type, int new_how);

player_t    *update_armor(player_t *p, int how);
player_t    *update_hp(player_t *p, int how);
player_t    *update_strengh(player_t *p, int how);
player_t    *update_speed(player_t *p, int how);

stats_list_t    **init_player_stats_list(void);

rpg_t   *pnj_management(rpg_t *rpg, sfRenderWindow *window);

int all_collision(player_t *player, entity_list *pnj_list);

entity_t *found_right_pnj(rpg_t *rpg);

void draw_text_pnj(sfRenderWindow *window, rpg_t *rpg);

void disp_text(rpg_t *rpg, entity_t *pnj, sfSprite *sprite,
    sfRenderWindow *window);

sfText *set_text(char *str);
sfVector2f right_pos(sfVector2f pos, float x, float y);

rpg_t   *reset_pos_after_inventory(rpg_t *rpg, sfRenderWindow *window);

rpg_t   *if_on_an_slot_release_it_part_two(rpg_t *rpg,
    inv_slots_t *touched, int equip);
rpg_t   *if_on_an_slot_release_it(rpg_t *rpg, sfRenderWindow *window);

inv_slots_t *check_touch_this_slots(inv_slots_t *list, sfRenderWindow *window);
rpg_t   *if_on_an_item_grab_it(rpg_t *rpg, sfRenderWindow *window);

rpg_t   *set_m_item_to_m_pos_and_draw_it(sfRenderWindow *window, rpg_t *rpg);

rpg_t   *set_inventory_positions(rpg_t *rpg, sfRenderWindow *window);

rpg_t   *draw_inv_and_slot_interaction(rpg_t *rpg, sfRenderWindow *window);

inv_slots_t *draw_this_slot_items(inv_slots_t *list, sfRenderWindow *window);
inventory_t *draw_inventory_items(inventory_t *inv, sfRenderWindow *window);

rpg_t   *inventory_mouse_management(rpg_t *rpg, sfRenderWindow *window);

sfVector2i  get_mouse_pos_with_basic_view(sfRenderWindow *window);

inv_slots_t *add_item_to_this_inv(inv_slots_t *list, items_t *new_item);

items_t *init_this_item(char *name, char *path, int type);
items_t *init_item_armor(int value, char *name);
items_t *init_item_boots(int value, char *name);
items_t *init_item_sword(int value, char *name);
items_t *init_item_hearth(int value, char *name);

inv_slots_t *interaction_with_these_slots(inv_slots_t *list,
    sfRenderWindow *window);
rpg_t   *interaction_mouse_slots(rpg_t *rpg,
    sfRenderWindow *window);

inv_slots_t *set_equiped_pos_on_screen(inv_slots_t *slot, float x, float y);
inv_slots_t *set_stocked_pos_on_screen(inv_slots_t *slot, float x, float y);
inventory_t *set_slots_pos_on_screen(inventory_t *inv, sfVector2f p_pos);

inv_slots_t *init_n_empty_inv_slots(int n);
inv_slots_t *add_to_slot_list(inv_slots_t *list);

inv_slots_t *free_this_slot(inv_slots_t *list);
inv_slots_t *free_this_slot_list(inv_slots_t *list);

rpg_t   *inventory_keys_management(rpg_t *rpg, sfEvent *event);

inv_events_t    **init_inventory_key_list(void);
inv_events_t    **free_inventory_key_list(inv_events_t **list);

inv_events_t    **init_inventory_keys_part_one(inv_events_t **list);

rpg_t   *close_inventory(rpg_t *rpg);

rpg_t   *others_loops(rpg_t *rpg, sfRenderWindow *window);

key_array_t **interaction_part(key_array_t **list);

rpg_t   *interact_with_the_key_e(rpg_t *rpg);

rpg_t   *manage_inventory_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg);
rpg_t   *inventory_events(rpg_t *rpg, sfRenderWindow *window, sfEvent *event);

inventory_t *init_inventory(void);

rpg_t   *set_inventory_positions(rpg_t *rpg, sfRenderWindow *window);
rpg_t   *draw_inv_and_slot_interaction(rpg_t *rpg, sfRenderWindow *window);
rpg_t   *inventory_loop(rpg_t *rpg, sfRenderWindow *window);

key_array_t **inventory_part(key_array_t **list);

rpg_t   *launch_inventory(rpg_t *rpg);

portal_t    *init_fisher_house(portal_t *list);
portal_t    *init_far_house_in_starting_village(portal_t *list);
portal_t    *init_witch_house(portal_t *list);

portal_t    *init_first_house(portal_t *list);
portal_t    *init_forest_tunnel(portal_t *list);
portal_t    *init_last_house_cave(portal_t *list);
portal_t    *init_last_house(portal_t *list);
portal_t    *init_town_yellow_house(portal_t *list);

player_t    *p_tp_management(player_t *p, portal_t *list);

portal_t    *free_portals_list(portal_t *p);
portal_t    *init_this_portal(char *str);
portal_t    *add_this_portal(portal_t *list, char *arg);

portal_t    *init_overworld_portals(void);

key_array_t **arrow_part_and_shift(key_array_t **list);
key_array_t **zoom_part(key_array_t **list);

player_t    *player_stop_walking(player_t *p);

rpg_t   *zoom_in(rpg_t *rpg);
rpg_t   *zoom_out(rpg_t *rpg);

int pos_texture_col(sfVertexArray *m, int x, int y);

player_t    *anim_player(player_t *p);

player_t    *player_set_pos(player_t *p);
player_t    *player_set_rect(player_t *p);
player_t    *player_get_time(player_t *player);

rpg_t   *manage_player_moves(rpg_t *rpg);

rpg_t   *p_move_left(rpg_t *rpg);
rpg_t   *p_move_right(rpg_t *rpg);
rpg_t   *p_move_up(rpg_t *rpg);
rpg_t   *p_move_down(rpg_t *rpg);

player_move_t   **init_player_move_list(void);
player_move_t   **free_player_move_list(player_move_t **list);

texture_t   *free_this_texture(texture_t *obj);

animation_t *free_this_anim(animation_t *obj);

my_clock_t  *free_this_clock(my_clock_t *obj);

player_t    *free_player(player_t *player);

lists_t *free_lists(lists_t *list);

lists_t *init_all_lists(void);

rpg_t   *key_management(rpg_t *rpg, sfEvent *event);

key_array_t **all_init_calls(key_array_t **list);
key_array_t **init_key_array(void);
key_array_t **free_key_list(key_array_t **list);

rpg_t   *key_left(rpg_t *rpg);
rpg_t   *key_right(rpg_t *rpg);
rpg_t   *key_up(rpg_t *rpg);
rpg_t   *key_down(rpg_t *rpg);

sfIntRect   init_int_rect(int x, int x_max, int y, int y_max);

rpg_t   *camera_movement(rpg_t *rpg, sfRenderWindow *window);

rpg_t   *player_management(rpg_t *rpg, sfRenderWindow *window);

texture_t   *init_texture_struc(char *path);

animation_t *init_anim_struc(sfVector2f where,
    sfIntRect what_part, float when, float mv_dl);

player_t    *init_player(void);

camera_t    *init_camera(void);

map_t   *free_this_map(map_t *map);
all_maps_t  *free_maps(all_maps_t *maps);

rpg_t   *free_rpg_struc(rpg_t *rpg);

sfVector2f init_vector_two_f(float x, float y);
sfVector2i init_vector_two_i(int x, int y);

map_t   *draw_this_map(map_t *map, sfRenderWindow *window);
rpg_t   *draw_maps(rpg_t *rpg, sfRenderWindow *window);

map_t   *init_overworld(void);
all_maps_t  *init_all_maps(void);

rpg_t   *init_rpg_struct(void);

rpg_t   *manage_game_events(sfRenderWindow *window,
    sfEvent *event, rpg_t *rpg);
rpg_t   *game_events(sfRenderWindow *window, sfEvent *event, rpg_t *rpg);

int game_loop(sfRenderWindow *window);

void    window_action(sfRenderWindow *window);

int program_loop(void);

void    set_vertex_pos(int b, int i, int nb, sfVertex *vertex);
sfVertexArray   *load_map_in_vertexarray(map_pieces_t *nb_map, int x, int y);
sfRenderStates  *init_map_states(char *path);

map_pieces_t    *free_map_pieces(map_pieces_t *map);
map_pieces_t    *add_this_piece(map_pieces_t *list, int nb);
map_pieces_t    *get_map_from_file(char *path);

int my_rpg(int ac, char **av);

my_clock_t *get_time(my_clock_t *time);

my_clock_t  *init_this_clock(void);

sfRenderWindow  *create_my_window(int wid, int heig, int fps);

sfVector2f struct_vector2f(float x, float y);
sfVector2i struct_vector2i(int x, int y);
sfFloatRect struct_floatrect(float left, float top, float width, float height);
sfIntRect struct_intrect(int left, int top, int width, int height);

texture_stat_t *init_texture_stat(sfIntRect part, sfVector2f pos);

fight_button_t *get_att(char *asset, sfIntRect part, sfVector2f pos);

void draw_innterface(fight_t *fight, sfRenderWindow *window, enm_t *);

fight_t *init_all_fight(void);

rpg_t   *button_left(rpg_t *rpg);
rpg_t   *button_right(rpg_t *rpg);
rpg_t   *button_up(rpg_t *rpg);
rpg_t   *button_down(rpg_t *rpg);
rpg_t   *enter(rpg_t *rpg);

key_array_t **init_key_fight(void);

rpg_t *loop_fight(rpg_t *rpg, sfRenderWindow *window, int);
rpg_t   *fight_management(rpg_t *rpg, sfEvent *event);
rpg_t   *fight_events(sfRenderWindow *window, sfEvent *event, rpg_t *rpg);
key_array_t **init_key_fight(void);

stat_pers_t *attk_action(stat_pers_t *attk, stat_pers_t *def);
stat_pers_t *heal_action(stat_pers_t *attk, stat_pers_t *def);
stat_pers_t *snarl_action(stat_pers_t *attk, stat_pers_t *def);
stat_pers_t *fire_action(stat_pers_t *attk, stat_pers_t *def);

void draw_heal(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);
void draw_fire(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);
void draw_bl(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);
void draw_elec(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);
void draw_sn(particules_t *parti, stat_pers_t *pers, texture_stat_t *t_pers);


particules_t *mv_part(particules_t *parti, int i);
particules_t *trans_part(particules_t *parti, int nb, int i);
particules_t *recreat_part(particules_t *parti, sfVector2f tmp, int i);
particules_t *set_ver_texcoo(particules_t *parti, int x, int y, int i);
particules_t *set_color_ver(particules_t *parti, sfColor color, int i);
particules_t *set_vertex_pos_i(particules_t *parti, sfVector2f tmp, int i);

entity_list *get_all_mob(void);
entity_t *found_right_mob(rpg_t *rpg);
rpg_t   *mob_management(rpg_t *rpg, sfRenderWindow *window);
rpg_t   *set_mob_positions(rpg_t *rpg, sfRenderWindow *window);

void draw_life_enm(fight_t *fight, sfRenderWindow *window);
void draw_life_player(fight_t *fight, sfRenderWindow *window);
void draw_innterface(fight_t *fight, sfRenderWindow *window, enm_t *enm);
void draw_button(fight_t *fight, sfRenderWindow *window);
enm_t *init_enm(rpg_t *rpg, int enm);
sfRenderStates *init_sate(char *str);
life_t *init_life(void);
void set_stat_text_pers(pers_t *new);
pers_t *init_pers();
fight_button_t *link_button(
    fight_button_t *att1, fight_button_t *att2,
    fight_button_t *att3, fight_button_t *att4);
fight_button_t *init_all_button(void);
void set_pos_fight(fight_t *new);
void set_rect_fight(fight_t *new);
void set_sprite_stat_for_fight(fight_t *new);
rpg_t *intit_stata_player(rpg_t *rpg);
enm_t *init_enm_bl(rpg_t *rpg, enm_t *enm);
enm_t *init_enm_sn(rpg_t *rpg, enm_t *enm);
enm_t *init_enm(rpg_t *rpg, int enm);
rpg_t *do_heal(rpg_t *rpg, sfRenderWindow *window);
rpg_t *do_snarl(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers);
rpg_t *do_fire(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers);
rpg_t *do_tackl(rpg_t *rpg, sfRenderWindow *window, texture_stat_t *pers);
particules_t *ini_heal_part(void);
particules_t *ini_snarl_part(void);
particules_t *ini_elec_part(void);
particules_t *ini_fire_part(void);
sfRenderStates *init_sate(char *str);
particules_t *ini_blobe_part(void);
particules_t *ini_sn_part(void);
particules_t *ini_sor_one_part(void);
particules_t *ini_sor_two_part(void);
entity_t *found_right_mob(rpg_t *rpg);
entity_t *collision_detector_up_pnj(player_t *player, entity_list *pnj_list);
entity_t *collision_detector_down_pnj(player_t *player, entity_list *pnj_list);
entity_t *collision_detector_left_pnj(player_t *player, entity_list *pnj_list);
entity_t *collision_detector_right_pnj(player_t *player, entity_list *pnj_list);
rpg_t *lunch_fight(rpg_t *rpg, int enm, sfRenderWindow *window);
rpg_t *manage_end(rpg_t *rpg);
enm_t *init_sor_cheat(rpg_t *rpg, enm_t *enm);
enm_t *init_sor_bl(rpg_t *rpg, enm_t *enm);
sfText *set_text_pnj(char *str);
sfMusic **init_music(void);

#endif
