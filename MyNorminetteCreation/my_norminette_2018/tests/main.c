#include "./../include/my_norm.h"

int main(void)
{
    file_t  *list = NULL;
    char    *name_t = my_strdup("main.c");
    char    *dir_t = my_strdup("src/");
    char    type_t = 'c';

    list = add_to_list(name_t, dir_t, type_t, list);
    /* cr_assert_str_eq(list->name, name_t); */

    /* dir_t = my_strcat(dir_t, name_t); */
    /* cr_assert_str_eq(list->path, dir_t); */

    /* cr_assert_eq(list->type, type_t); */

    /* name_t = free_cleanly_this_str(name_t); */
    /* dir_t = free_cleanly_this_str(dir_t); */

    name_t = my_strdup("my.h");
    dir_t = my_strdup("include/");
    type_t = 'h';
    list = add_to_list(name_t, dir_t, type_t, list);

    list = list->next;
    my_printf("%s\n", list->name);

    my_printf("%s\n", list->path);

    my_printf("%c\n", list->type);

    name_t = free_cleanly_this_str(name_t);
    dir_t = free_cleanly_this_str(dir_t);
}
