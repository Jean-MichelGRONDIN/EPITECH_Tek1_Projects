/*
** EPITECH PROJECT, 2019
** MUL_my_rpg_2018
** File description:
** load vertex thanks to readed map
*/

#include "./../../include/rpg.h"

void    set_vertex_pos(int b, int i, int nb, sfVertex *vertex)
{
    vertex[0].position = init_vector_two_f(b * 16, i * 16);
    vertex[1].position = init_vector_two_f((b + 1) * 16, i * 16);
    vertex[2].position = init_vector_two_f((b + 1) * 16, (i + 1) * 16);
    vertex[3].position = init_vector_two_f(b * 16, (i + 1) * 16);
    vertex[0].texCoords = init_vector_two_f((nb % 16) * 16, (nb / 16) * 16);
    vertex[1].texCoords = init_vector_two_f(((nb % 16) + 1) * 16,
        (nb / 16) * 16);
    vertex[2].texCoords = init_vector_two_f(
        ((nb % 16) + 1) * 16, ((nb / 16) + 1) * 16);
    vertex[3].texCoords = init_vector_two_f((nb % 16) * 16,
        ((nb / 16) + 1) * 16);
}

sfVertexArray   *load_map_in_vertexarray(map_pieces_t *tmp, int x, int y)
{
    map_pieces_t    *nb_map = tmp;
    int i = 0;
    int b = 0;
    int nb = 0;
    sfVertexArray   *case_map = sfVertexArray_create();
    sfVertex    *vertex;

    sfVertexArray_setPrimitiveType(case_map, sfQuads);
    sfVertexArray_resize(case_map, x * y * 4);
    while (i != y) {
        while (b != x) {
            nb = nb_map->n - 1;
            nb_map = nb_map->next;
            vertex = sfVertexArray_getVertex(case_map, (b + i * x) * 4);
            set_vertex_pos(b, i, nb, vertex);
            b++;
        }
        b = 0;
        i++;
    }
    return (case_map);
}

sfRenderStates  *init_map_states(char *path)
{
    sfRenderStates  *stat_map = malloc(sizeof(*stat_map));

    stat_map->blendMode = sfBlendAlpha;
    stat_map->transform = sfTransform_fromMatrix(1, 0, 0, 0, 1, 0, 0, 0, 1);
    stat_map->texture = sfTexture_createFromFile(path, NULL);
    stat_map->shader = NULL;
    return (stat_map);
}
