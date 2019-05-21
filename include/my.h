/*
** EPITECH PROJECT, 2018
** my_h
** File description:
** my_h
*/

#ifndef MY_H_
#define MY_H_
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <fcntl.h>
#include <dirent.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <term.h>
#include <getopt.h>
#include "../lib/my/include/my.h"
#include "struct.h"
#include "macro.h"
#include "game_macro.h"
#include "game.h"

int my_atoi(char *);
int get_any_key(void);
int my_arg_count_check(char **);
int check_env_term(char **);
int my_parser_args(int, char **, sets_t *, tetri_l *);
int my_settings_init(sets_t *, tetri_l *);
int parser_tetriminos(sets_t *, tetri_l *);
int check_if_space(int, int, char *);
int check_line_first_line(tetri_t *, char *);
int check_line_piece(tetri_t *, char *);
int read_piece_lines(tetri_t *, char *, int);
int check_file_name(char *);
int alpha_sort(tetri_t *, tetri_l *);
int map_size_arg_check(sets_t *, int, int);
int check_debug_or_not(sets_t *, tetri_l *);
int check_dashes_valid_or_not(int, char **);
void check_repetitive_param(sets_t *);
void display_key(sets_t *);
void my_switcher_part_one(char **, sets_t *);
void display_usage(char *);
void display_debug(sets_t *, tetri_l *);
void display_next_tetrimino(sets_t *, map_t *, tetri_l *);
char **init_double_str(char **, int, int);
char *my_strcpy(char *, char *);
char my_char_copy(char *);
int init_tetri_struct(tetri_t *);

#endif
