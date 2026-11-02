/*
** EPITECH PROJECT, 2026
** window_display.c
** File description:
** window_display.c
*/

#include "my.h"
#include <CSFML/Graphics.h>

void display_window(sfRenderWindow *window)
{
    sfEvent event;
    sfTexture *texture = sfTexture_createFromFile("spritesheet.png", NULL);
    sfSprite *sprite;

    while (sfRenderWindow_isOpen(window)){
        analyse_events(window, event);
        create_sprite("spritesheet.png", window, texture, event);
        sfRenderWindow_display(window);
    }
    sfRenderWindow_destroy(window);
}
