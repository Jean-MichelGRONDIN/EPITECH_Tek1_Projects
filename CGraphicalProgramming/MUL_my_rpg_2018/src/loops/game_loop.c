/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** loop of the game part
*/

#include "./../../include/rpg.h"

void free_music(sfMusic **music)
{
    sfMusic_destroy(music[0]);
    sfMusic_destroy(music[1]);
    sfMusic_destroy(music[2]);
    sfMusic_destroy(music[3]);
    sfMusic_destroy(music[4]);
    sfMusic_destroy(music[5]);
}

int game_loop(sfRenderWindow *window)
{
    int ret = 0;
    rpg_t   *rpg = init_rpg_struct();
    sfEvent event;

    rpg = camera_movement(rpg, window);
    sfMusic_play(rpg->musics[0]);
    while (rpg->end == 0 && sfRenderWindow_isOpen(window)) {
        rpg = draw_maps(rpg, window);
        rpg = player_management(rpg, window);
        rpg = pnj_management(rpg, window);
        rpg = mob_management(rpg, window);
        rpg = game_events(window, &event, rpg);
        draw_text_pnj(window, rpg);
        rpg = others_loops(rpg, window);
        window_action(window);
    }
    free_music(rpg->musics);
    ret = rpg->end;
    rpg = free_rpg_struc(rpg);
    return (ret);
}
