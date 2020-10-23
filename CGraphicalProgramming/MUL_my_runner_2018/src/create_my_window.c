/*
** EPITECH PROJECT, 2018
** MUL_my_runner_2018
** File description:
** create the window and return it
*/

#include "./../include/runner.h"

sfRenderWindow  *create_my_window(int wid, int heig, int fps)
{
    sfRenderWindow  *window;
    sfVideoMode video_mode;

    video_mode.width = wid;
    video_mode.height = heig;
    video_mode.bitsPerPixel = 120;
    window = sfRenderWindow_create(video_mode, "My runner by J-M",
        sfDefaultStyle, NULL);
    sfRenderWindow_setFramerateLimit(window, fps);
    return (window);
}
