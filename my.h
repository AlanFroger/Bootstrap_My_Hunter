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

typedef struct duck_s {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rect;
    sfVector2f position;
    int step;
} duck_t;

sfRenderWindow *create_window(int length, int width);
void create_sprite(sfRenderWindow *window, sfEvent event, duck_t *duck, int y);
void display_window(sfRenderWindow *window);
void analyse_events(sfRenderWindow *window, sfEvent event);
void init_duck(duck_t *duck_s, char *file, int nb);
void move_rect(sfIntRect *rect, int offset, int max_value);
sfIntRect init_rect(sfIntRect *rect);
framebuffer_t *frambuffer_create(unsigned int width, unsigned int height);
framebuffer_t *frambuffer(int length, int height);
#endif
