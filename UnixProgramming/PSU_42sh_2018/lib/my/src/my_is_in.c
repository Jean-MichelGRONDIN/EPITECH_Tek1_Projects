/*
** EPITECH PROJECT, 2019
** CPE_solostumper_1_2018
** File description:
** compare a char to a list of char return 1 if found
*/

int my_is_in(char c, char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (c == str[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}
