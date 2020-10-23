/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** display the usage
*/

#include "./../include/cipher.h"

void    disp_usage(void)
{
    printf("USAGE\n");
    printf("    ./103cipher message key flag\n\n");
    printf("DESCRIPTION\n");
    printf("    message    a message, made of ASCII characters\n");
    printf("    key        the encryption key, made of ASCII characters\n");
    printf("    flag       0 for the message to be encrypted, 1 to be");
    printf(" decrypted\n");
}
