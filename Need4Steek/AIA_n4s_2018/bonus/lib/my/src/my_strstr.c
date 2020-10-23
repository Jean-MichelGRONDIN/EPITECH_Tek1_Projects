/*
** EPITECH PROJECT, 2018
** CPool_Day06_2018
** File description:
** find the first character given in a string
*/

char    *my_strstr(char *str, char const *to_find)
{
    int index_leter = 0;

    while (str[index_leter] != *to_find) {
        if (*to_find == '\0') {
            return ("This is not a valid caracter!\n");
        } else if (str[index_leter] == '\0') {
            return ("There is not this character!\n");
        } else {
            index_leter = index_leter + 1;
        }
    }
    str[index_leter + 1] = '\0';
    return (&str[index_leter]);
}
