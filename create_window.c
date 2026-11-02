/*
** EPITECH PROJECT, 2026
** create_window.c
** File description:
** create_window.c
*/

#include <CSFML/Graphics.h>

sfRenderWindow *create_window(int length, int width)
{
    sfRenderWindow *window;
    sfVideoMode video_mode;

    video_mode.size.x = length;
    video_mode.size.y = width;
    video_mode.bitsPerPixel = 32;
    window = sfRenderWindow_create(video_mode, "My_Window", sfDefaultStyle
        , sfWindowed, NULL);
    return window;
}
