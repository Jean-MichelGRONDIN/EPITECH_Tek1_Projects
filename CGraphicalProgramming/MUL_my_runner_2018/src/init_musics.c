/*
** EPITECH PROJECT, 2019
** MUL_my_runner_2018
** File description:
** init all musics
*/

#include "./../include/runner.h"

void    init_musics(sfMusic *music)
{
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
}
