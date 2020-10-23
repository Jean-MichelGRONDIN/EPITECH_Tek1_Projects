/*
** EPITECH PROJECT, 2019
** my_rpg_2018
** File description:
** enum of the prog
*/

#ifndef ENUM_H_
#define ENUM_H_

enum program_stage {
    MENU = 15,
    GAME = 16,
    CLOSE = 17,
};

enum camera_mode {
    CENTRED = 25,
    FREE = 26,
};

enum direction {
    UP = 35,
    DOWN = 36,
    RIGHT = 37,
    LEFT = 38,
};

enum condition {
    YES = 41,
    NO = 42,
};

enum fight_enum {
    HEAL = 1,
    TAKL = 2,
    SNARL = 3,
    FIRE = 4,
    NONEATT  = 5,
    FINISH = 6,
};

enum enm_enum {
    BLOBE = 3,
    SNAKE = 4,
    SORCER = 5,
    SORCERT = 6,
};

enum equipement {
    ARMOR = 51,
    BOOT = 52,
    SWORD = 53,
    HEARTH = 54,
};

#endif