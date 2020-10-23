/*
** EPITECH PROJECT, 2019
** asm
** File description:
** struc
*/

#ifndef STRUC_H_
#define STRUC_H_

#include "include.h"

typedef struct  check_list {
    int n;
    int (*check)(char **);
} check_list_t;


typedef struct  label {
    char    *name;
    struct  label   *next;
} label_t;

typedef struct  champ_arg_list {
    char    *name;
    int prog_number;
    int prog_adress;
    struct  champ_arg_list  *next;
} champ_arg_list_t;

typedef struct  check_arg_champ {
    int n;
    char    *opt_str;
    champ_arg_list_t  *(*check)(champ_arg_list_t *, int, char **, int *);
} check_arg_champ_t;

typedef struct s_champion {
    char *name;
    int player;
    int status;
    int pc;
    int live;
    int cycle;
    int *reg;
    int prog_size;
    int live_all;
    struct s_champion *next;
} champion_t;

typedef struct action {
    int inst;
    champion_t *(*exec)(char *ram, champion_t *chp, champion_t *actual);
}action_t;

#endif