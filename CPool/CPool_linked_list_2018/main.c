/*
** EPITECH PROJECT, 2018
** 
** File description:
** 
*/

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "./my.h"

struct list *put_in_list(struct list *mylist, char *name, int dmgs)
{
    struct list *tmp = mylist;
    struct list *new = malloc(sizeof(struct list));

    new->name_weapon = name;
    new->damages = dmgs;
    new->next = NULL;
    if (mylist == NULL) {
        return (new);
    } else {
        while (mylist->next != NULL) {
            mylist = mylist->next;
        }
        mylist->next = new;
        return (tmp);
    }
}

int main()
{
    struct list *mylist = NULL;
    struct list *tmp = malloc(sizeof(struct list));

    mylist = put_in_list(mylist, strdup("AK 47"), 150);
    mylist = put_in_list(mylist, strdup("Sniper"), 1505);
    mylist = put_in_list(mylist, strdup("LIVAÏ"), 999999999);
    tmp = mylist;
    while (mylist != NULL) {
        printf("name of the weapon %s , damages %d \n", mylist->name_weapon, mylist->damages);
        mylist = mylist->next;
    }
    while (tmp != NULL) {
        tmp = tmp->next;
        free(mylist);
        mylist = tmp;
    }
    return (0);
}
