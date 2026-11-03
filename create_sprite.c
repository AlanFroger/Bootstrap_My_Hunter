/*
** EPITECH PROJECT, 2026
** create_sprite.c
** File description:
** create_sprite.c
*/

#include <CSFML/Graphics.h>
#include <CSFML/System.h>
#include <stdio.h>
#include "my.h"

void display_all(sfRenderWindow *window, sfEvent event, sfSprite *sprite)
{
    sfRenderWindow_clear(window, sfBlack);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    sfRenderWindow_display(window);
    analyse_events(window, event);
}

sfIntRect init_rect(sfIntRect *rect)
{
    rect->position.y = 0;
    rect->size.x = 110;
    rect->size.y = 110;
    return *rect;
}

void get_time(float *seconds, sfTime *time, sfClock *clock)
{
    *time = sfClock_getElapsedTime(clock);
    *seconds = sfTime_asSeconds(*time);
}

static void animation(duck_t *duck, sfClock *clock, int speed)
{
    sfVector2f position = sfSprite_getPosition(duck->sprite);

    duck->step = (duck->step + 1) % 3;
    duck->rect.position.x = duck->step * duck->rect.size.x;
    sfSprite_setTextureRect(duck->sprite, duck->rect);
    sfSprite_setPosition(duck->sprite, (sfVector2f){position.x + speed,
            position.y});
    sfClock_restart(clock);
}

void update_position(duck_t *duck, int y)
{
    duck->position = sfSprite_getPosition(duck->sprite);
    duck->position.y = y;
    sfSprite_setPosition(duck->sprite,
        (sfVector2f){duck->position.x, duck->position.y});
}

void create_sprite(sfRenderWindow *window, sfEvent event, duck_t *duck, int y)
{
    sfClock *clock = sfClock_create();
    sfTime time;
    sfVector2f position = sfSprite_getPosition(duck->sprite);
    sfVector2u window_size = sfRenderWindow_getSize(window);
    float seconds;
    int speed = rand() % (75 - 25 + 1) + 25;

    while (position.x < window_size.x + 110){
        position = sfSprite_getPosition(duck->sprite);
        get_time(&seconds, &time, clock);
        if (seconds >= 0.15f){
            animation(duck, clock, speed);
        }
        update_position(duck, y);
        display_all(window, event, duck->sprite);
    }
}
