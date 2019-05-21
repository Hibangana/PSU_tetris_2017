/*
** EPITECH PROJECT, 2018
** game.h
** File description:
** game.h
*/

#ifndef GAME_H
#define GAME_H
#include <time.h>

int init_structures(sets_t *, map_t *, interface_t *);
int display_map_interface(sets_t *, map_t *, interface_t *);
int launch_the_game(sets_t *, tetri_l *);
int display_tetristack(sets_t *, stack_l *, map_t *, tetri_l *);
int add_tetri_to_stack(tetri_l *, stack_l *, sets_t *, int);
int add_to_stack(tetri_t *, stack_l *);
void stock_first_node(sets_t *, tetri_l *, stack_l *);
void remove_invalid_tetri(tetri_l *);
void stock_new_node(sets_t *, tetri_l *, stack_l *);

#endif
