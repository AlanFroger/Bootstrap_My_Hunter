/*
** EPITECH PROJECT, 2026
** analyse_events.c
** File description:
** analyse_events.c
*/

#include "my.h"
#include <stdio.h>
#include <CSFML/Graphics.h>


void manage_mouse_click(sfMouseButtonEvent *event)
{
    if (event->type == sfEvtMouseButtonPressed)
        printf("Mouse x=%i t=%i\n", event->position.x, event->position.y);
}

void close_window(sfRenderWindow *window)
{
    sfRenderWindow_close(window);
}

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    while (sfRenderWindow_pollEvent(window, &event)){
        if (event.type == sfEvtClosed)
            close_window(window);
    }
    manage_mouse_click(&event.mouseButton);
}
