/*
** EPITECH PROJECT, 2026
** init_duck.c
** File description:
** init_duck.c
*/

#include "my.h"

void init_duck(duck_t *duck_s, char *file, int nb)
{
    sfIntRect rect;

    duck_s->texture = sfTexture_createFromFile(file, NULL);
    duck_s->sprite = sfSprite_create(duck_s->texture);
    duck_s->position = (sfVector2f){0, nb};
    duck_s->rect = init_rect(&rect);
    duck_s->step = 0;
    sfSprite_setPosition(duck_s->sprite, duck_s->position);
    sfSprite_setTextureRect(duck_s->sprite, rect);
}
