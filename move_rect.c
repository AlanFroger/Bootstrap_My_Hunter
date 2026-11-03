/*
** EPITECH PROJECT, 2026
** move_rect.c
** File description:
** move_rect.c
*/

#include <CSFML/Graphics.h>

void move_rect(sfIntRect *rect, int offset, int max_value)
{
    if (rect->position.x == max_value)
        rect->position.x = 0;
    else
        rect->position.x += 110;
}
