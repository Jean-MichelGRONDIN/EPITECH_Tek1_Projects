/*
** EPITECH PROJECT, 2018
** 103cipher_2018
** File description:
** initialisation of the prog
*/

#include "./../include/cipher.h"

index_t *initialise_an_index(int c, int r)
{
    index_t *i = malloc(sizeof(*i));

    i->cols = c;
    i->rows = r;
    return (i);
}

void    encrypt(int ac, char **av)
{
    code_t   *key = initialise_key(av[ac - 2]);
    msg_t   *msg = initialise_msg(av[ac - 3], key->nb_line);

    print_matrix_key(key);
    msg->msg = mul_between_matrix(key, msg);
    print_matrix_msg(msg);
}

void    uncrypt(int ac, char **av)
{
    code_t   *key = initialise_key(av[ac - 2]);
    msg_t   *msg = init_msg_when_crypted(av[ac - 3], key->nb_line);

    key = reverse_the_key_matrix(key);
    print_identity_matrix(key->res_rev, key->nb_line);
    msg = decrypt_msg(key, msg);
    print_matrix_msg_decrypted(msg);
}

void    initialise_matrix(int ac, char **av)
{
    if (strcmp(av[ac - 1], "0") == 0) {
        encrypt(ac, av);
    } else if (strcmp(av[ac - 1], "1") == 0) {
        uncrypt(ac, av);
    } else {
        write(2, "Wrong number it's not 0 or 1 !\n", 31);
        exit(84);
    }
}
