/*
** EPITECH PROJECT, 2026
** main.c
** File description:
** main.c
*/

#include "my.h"

int main(void)
{
    sfRenderWindow *window;

    window = create_window(800, 600);
    display_window(window);
    return (0);
}
