/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** copies a string into another
*/

char    *my_strcpy(char *dest, char const *src)
{
    int index_copy = 0;

    while (src[index_copy] != '\0') {
        dest[index_copy] = src[index_copy];
        index_copy = index_copy + 1;
    }
    dest[index_copy] = '\0';
    return (dest);
}
