/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** count the nb of each word
*/

#include "./../include/stumper.h"

int find_word_len(char *str, int i)
{
    int len = 0;

    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
        len = len + 1;
        i = i + 1;
    }
    return (len);
}

char    *identify_this_word(char *str, int i)
{
    int len = find_word_len(str, i);
    char    *word = malloc(sizeof(char) * (len + 1));
    int index = 0;

    word[len] = '\0';
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
        word[index] = str[i];
        index = index + 1;
        i = i + 1;
    }

    return (word);
}

int put_at_next_word(char *str, int i)
{
    while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0') {
        i = i + 1;
    }
    if (str[i] == '\0') {
        return (i);
    } else {
        return (i + 1);
    }
}

void    find_nb_of_this_word(char *str, int i, char *word)
{
    int nb = 0;
    char    *new_word = NULL;

    while (str[i] == '\0') {
        i = put_at_next_word(str, i);
        new_word = identify_this_word(str, i);
        nb = nb + my_strcmp(new_word, word);
    }
    printf("%s: %d\n", word, nb);
}

char    **copy_the_part_already_here(char **new, char **old, int *i, int len)
{
    while (*i != len) {
        new[*i] = my_strcpy(new[*i], old[*i]);
        *i = *i + 1;
    }
    return (new);
}

char    **add_him_to_save(char **save, char *word, int len)
{
    char    **new_save = malloc(sizeof(char *) * (len + 1));
    int i = 0;
    int i_word = 0;

    if (save == NULL) {
        new_save[0] = malloc(sizeof(char) * (my_strlen(word) + 1));
        new_save[0][my_strlen(word)] = '\0';
    }
    if (save != NULL) {
        while (i != len) {
            new_save[i] = malloc(sizeof(char) * (my_strlen(save[i]) + 1));
            new_save[i][my_strlen(save[i])] = '\0';
            i = i + 1;
        }
        printf("Par 3\n");
        new_save = copy_the_part_already_here(new_save, save, &i, len);
    }
    while (word[i_word] != '\0') {
        new_save[i][i_word] = word[i_word];
        i_word = i_word  + 1;
    }
    return (new_save);
}

void    is_it_already_known(char *str, int i, char *word)
{
    static  char    **save = NULL;
    static int tab_len = 0;
    int known = 0;
    int index = 0;

    while (index != tab_len && known == 0) {
        if (my_strcmp(save[index], word) == 1) {
            printf("Par 4\n");
            known = 1;
        }
        index = index + 1;
    }
    if (known == 0) {
        printf("Par 2\n");
        find_nb_of_this_word(str, (i + 1), word);
        save = add_him_to_save(save, word, tab_len);
        tab_len = tab_len + 1;
    }
}

void    if_is_a_word_count_them_all(char *str, int i)
{
    char    *word = NULL;
    if (i == 0 && str[i] != ' ' && str[i] != '\t') {
        word = identify_this_word(str, i);
        is_it_already_known(str, i, word);
    }
    if (str[i + 1] != ' ' && str[i + 1] != '\t') {
        if (str[i] == ' ' || str[i] == '\t') {
            word = identify_this_word(str, (i + 1));
            is_it_already_known(str, i, word);
        }
    }
}

void    count_words(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if_is_a_word_count_them_all(str, i);
        i = i + 1;
    }
}
