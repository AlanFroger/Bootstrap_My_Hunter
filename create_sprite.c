/*
** EPITECH PROJECT, 2026
** create_sprite.c
** File description:
** create_sprite.c
*/

#include <CSFML/Graphics.h>
#include <CSFML/System.h>
#include <stdio.h>

void *create_sprite(char *file, sfRenderWindow *window, sfTexture *texture
    , sfEvent event)
{
    sfSprite *sprite = sfSprite_create(texture);
    sfIntRect rect;
    sfClock *clock = sfClock_create();
    sfTime current_time;
    int seconds;

    rect.position.y = 0;
    rect.size.x = 110;
    rect.size.y = 110;
    while (sfRenderWindow_pollEvent(window, &event)){
        current_time = sfClock_getElapsedTime(clock);
        seconds = sfTime_asMilliseconds(current_time);
        rect.position.x = 110 * (seconds % 3);
        sfSprite_setTextureRect(sprite, rect);
        sfRenderWindow_drawSprite(window, sprite, NULL);
    }
}
