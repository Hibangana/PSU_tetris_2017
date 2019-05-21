/*
** EPITECH PROJECT, 2018
** game_macro.h
** File description:
** game_macro.h
*/

#ifndef GAME_MACRO_H
#define GAME_MACRO_H

#define x_tetri x_map + (sets->size_y / 2) - (temp->y / 2)
#define y_tetri y_map
#define y_next ((y / 2) - (sets->size_y / 2))
#define x_next ((x / 2) + (my_strlen(map->map[0]) / 2) + 5)
#define x_message (x / 2) - (my_strlen(message) / 2)
#define y_map (y / 2) - (sets->size_y / 2) + i
#define x_map (x - my_strlen(map->map[i])) / 2
#define x_map2 ((x - my_strlen(map->map[0])) / 2)
#define y_inter ((y / 2) - (sets->size_y / 2)) + i
#define x_interface (my_strlen(inter->border[i]) + 5)
#define x_inter x_map2 - x_interface
#define stats_y_x y_inter, x_inter + 2
#define current_time ((double)t) / CLOCKS_PER_SEC
#define i_highscore inter->highscore
#define i_score inter->score
#define invalid temp->width == -1 || temp->height == -1 || temp->color == -1
#define xy tetriminos->height, tetriminos->width
#define map_bottom (y / 2) - (sets->size_y / 2) + sets->size_x
#define y_tetri_2 y_next + i + 2
#define x_tetri_2 x_next + (temp->y * 2)
#define x_tetri_3 x_next + (temp->y / 2)

#endif
