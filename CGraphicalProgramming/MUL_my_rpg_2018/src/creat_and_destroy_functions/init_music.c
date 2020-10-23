/*
** EPITECH PROJECT, 2019
** sdq
** File description:
** qsd
*/

#include "./../../include/rpg.h"

sfMusic **init_music(void)
{
    sfMusic **music = malloc(sizeof(*music) * 6);

    music[0] = sfMusic_createFromFile("./assets/music_.wav");
    music[1] = sfMusic_createFromFile("./assets/dracarys.wav");
    music[2] = sfMusic_createFromFile("./assets/yaaa.wav");
    music[3] = sfMusic_createFromFile("./assets/aaa.wav");
    music[4] = sfMusic_createFromFile("./assets/tonnerresound.wav");
    music[5] = sfMusic_createFromFile("./assets/musicfight.wav");
    sfMusic_setLoop(music[0], sfTrue);
    sfMusic_setLoop(music[5], sfTrue);
    return (music);
}