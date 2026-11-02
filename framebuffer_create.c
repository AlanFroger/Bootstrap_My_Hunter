/*
** EPITECH PROJECT, 2026
** framebuffer_create.c
** File description:
** framebuffer_create.c
*/

#include "my.h"
#include <CSFML/Graphics.h>
#include <CSFML/Config.h>

framebuffer_t *frambuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *fb;

    fb->width = width;
    fb->height = height;
    return fb;
}
