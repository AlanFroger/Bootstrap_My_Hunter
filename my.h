/*
** EPITECH PROJECT, 2026
** my.h
** File description:
** my.h
*/

#ifndef MY_H
    #define MY_H
    #include <CSFML/Graphics.h>
typedef struct s_framebuffer {
    unsigned int width;
    unsigned int height;
}framebuffer_t;

sfRenderWindow *create_window(int length, int width);
void *create_sprite(char *file, sfRenderWindow *window, sfTexture *texture
    , sfEvent event);
void display_window(sfRenderWindow *window);
void analyse_events(sfRenderWindow *window, sfEvent event);
framebuffer_t *frambuffer_create(unsigned int width, unsigned int height);
framebuffer_t *frambuffer(int length, int height);
#endif
