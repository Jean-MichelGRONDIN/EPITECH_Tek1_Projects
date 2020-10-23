/*
** EPITECH PROJECT, 2018
** main
** File description:
** main
*/

#include <stddef.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "./../include/my.h"

char **malloc_tab_b(char *stock, int *y)
{
    int i = 0;
    int j = 0;
    int s = 0;
    char **tab = NULL;

    for (i = 0; stock[i] != '\0'; i++)
        (stock[i] == '!' && stock[i + 1] == '!') ? (*y)++ : *y;
    tab = my_calloc(sizeof(char *), ((*y * 2) + 1));
    for (i = 0; i <= (*y * 2); i++)
        tab[i] = my_calloc(sizeof(char), (my_strlen(stock) + 1));
    tab[i + 1] = NULL;
    return (tab);
}

char **char_db(char *s)
{
    int b = 0;
    int i = 0;
    int x = 0;
    int y = 0;
    int j = 0;
    char **tab = malloc_tab_b(s, &y);

    for (i = 0, j = 0, x = 0; s[j] != '\0'; j++, x++) {
        s[j] == '!' && s[j + 1] == '!' ? x = 0, tab[++i][x] = s[j] : 0;
        s[j] == '!' && s[j + 1] == '!' ? tab[i][++x] = s[++j] : 0;
        tab[i][x] = s[j];
    }
    tab[i + 1] = NULL;
    return (tab);
}

char *concat_str_tab(char **tab, char *str)
{
    char *new = NULL;
    char **tmp = NULL;

    for (int i = 0; tab[i] != NULL; i++) {
        if (tab[i][0] == '!' && tab[i][1] == '!')
            new = my_strcat(new, my_strcat(str, tab[i] + 2));
        else
            new = my_strcat(new, tab[i]);
    }
    tmp = my_str_to_word_array(new, " ");
    my_putstr(new);
    my_putchar('\n');
    my_putstr(tmp[1]);
    my_putchar('\n');
    return (new);
}

int verif_histo(char *str)
{
    int nb = 0;

    for (int i = 0; str[i]; i++)
        (str[i] == '!') ? nb++ : 0;
    if (nb > 0)
        return (1);
    else
        return (0);
}

char *history(char *cmd_input, char *cmd_histo)
{
    char **tab = NULL;

    if (cmd_input == NULL)
        return (NULL);
    if (verif_histo(cmd_input) == 0)
        return (cmd_input);
    tab = char_db(cmd_input);
    if (cmd_histo == NULL)
        return (NULL);
    return (concat_str_tab(tab, cmd_histo));
}
