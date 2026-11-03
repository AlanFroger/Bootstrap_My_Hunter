/*
** EPITECH PROJECT, 2026
** window_display.c
** File description:
** window_display.c
*/

#include "my.h"
#include <stdio.h>
#include <CSFML/Graphics.h>

void display_window(sfRenderWindow *window)
{
    sfEvent event;
    sfVector2u window_size = sfRenderWindow_getSize(window);
    duck_t duck1;
    int nb;

    nb = rand() % (window_size.y - 110);
    init_duck(&duck1, "spritesheet.png", nb);
    create_sprite(window, event, &duck1, nb);
    while (sfRenderWindow_isOpen(window)){
        nb = rand() % (window_size.y - 110);
        duck1.position.x = 0;
        duck1.position.y = nb;
        sfSprite_setPosition(duck1.sprite,
            (sfVector2f){duck1.position.x, duck1.position.y});
        create_sprite(window, event, &duck1, nb);
    }
    sfSprite_destroy(duck1.sprite);
    sfRenderWindow_destroy(window);
}
