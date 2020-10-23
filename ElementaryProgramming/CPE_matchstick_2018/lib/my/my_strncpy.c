/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** copies a string into another
*/

void    my_strncpy_next(char *dest, char const *src, int n, int index_size)
{
    int index_copy = 0;

    if (n - 1 <= index_size) {
        while (index_copy <= n) {
            dest[index_copy] = src[index_copy];
            index_copy = index_copy + 1;
        }
    } else {
        while (index_copy <= n) {
            dest[index_copy] = src[index_copy];
            index_copy = index_copy + 1;
        }
        dest[index_copy] = '\0';
    }
}

char    *my_strncpy(char *dest, char const *src, int n)
{
    int index_size = 0;

    if (n <= 0) {
        dest[0] = '\0';
        return (dest);
    } else {
        while (src[index_size] != '\0') {
            index_size = index_size + 1;
        }
        my_strncpy_next(dest, src, n, index_size - 1);
        return (dest);
    }
}
