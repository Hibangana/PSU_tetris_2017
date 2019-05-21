/*
** EPITECH PROJECT, 2018
** struct_h
** File description:
** struct_h
*/

#ifndef STRUCT_H_
#define STRUCT_H_
#include <time.h>
#include <stdio.h>

typedef struct settings {
	char *left;
	char *right;
	char *turn;
	char *drop;
	char *quit;
	char *pause;
	int nb_tetriminos;
	int hide_next;
	int level;
	int size_y;
	int size_x;
	int map_count;
	int debug_count;
	int opt;
	int long_index;
	int speed;
} sets_t;

typedef struct tetriminos {
	char **piece;
	char *file_name;
	char *name;
	int order;
	int width;
	int height;
	int color;
	int reach_max_width;
	int row;
	struct tetriminos *next;
} tetri_t;

typedef struct tetriminos_list {
	struct tetriminos *head;
} tetri_l;

typedef struct map {
	char **map;
	int x;
	int y;
} map_t;

typedef struct interface {
	char **border;
	int x;
	int y;
	int highscore;
	int score;
	int line;
	int level;
	clock_t timer_start;
} interface_t;

typedef struct tetri_stack {
	char **tetri;
	int x;
	int y;
	int color;
	struct tetri_stack *next;
} stack_t;

typedef struct tetri_stack_l {
	struct tetri_stack *head;
} stack_l;

#endif
