/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** menu_loop
*/

#include "rpg.h"

int check_end(int ret)
{
    if (ret == GAME || ret == CLOSE)
        return (ret);
    return (0);
}

void    set_view(sfRenderWindow * window)
{
    sfView  *v = sfView_create();
    sfVector2f  size = init_vector_two_f(1920, 1080);
    sfVector2f  pos = init_vector_two_f(960, 540);

    sfView_setSize(v, size);
    sfView_setCenter(v, pos);
    sfRenderWindow_setView(window, v);
}

int menu_loop(sfRenderWindow *window)
{
    int ret = 0;
    int end = 0;
    sfEvent event;
    texture_t   *bg = init_texture_struc("assets/menu_bg.png");
    buttons_t   *buttons = init_menu_buttons();
    sfMusic *got = sfMusic_createFromFile("./assets/gotsound.wav");

    sfMusic_setLoop(got, sfTrue);
    sfMusic_play(got);
    set_view(window);
    while (end == 0 && sfRenderWindow_isOpen(window)) {
        sfRenderWindow_drawSprite(window, bg->sprite, NULL);
        ret = manage_menu_button_events(buttons, window, ret);
        ret = menu_events(window, &event, ret);
        end = check_end(ret);
        window_action(window);
    }
    sfMusic_stop(got);
    sfMusic_destroy(got);
    return (end);
}