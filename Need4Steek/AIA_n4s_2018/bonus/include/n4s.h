/*
** EPITECH PROJECT, 2017
** librayry en h
** File description:
** h
*/

#ifndef N4S_H_
#define N4S_H_

typedef struct  s_car {
    char    **info;
    int left;
    int middle;
    int right;
} car_t;

int countword(char *str, char sep);
int my_strlent(char *str, char sep);
char    **my_str_to_wordtab(char *str, char sep);
char    *get_next_line(int);
char    *dir(char *, int);
char    *forward(char *);
void    check_wall(car_t);
char    *start(void);
char    *backward(char *);
char    *info(void);
void    back(car_t);

#endif /* N4S_H */
