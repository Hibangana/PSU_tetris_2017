/*
** EPITECH PROJECT, 2018
** macro.h
** File description:
** macro.h
*/

#ifndef MACRO_H
#define MACRO_H

#define HELP_LONG "--help"
#define PAUSE_LONG "--key-pause="
#define QUIT_LONG "--key-quit="
#define TURN_LONG "--key-turn="
#define RIGHT_LONG "--key-right="
#define LEFT_LONG "--key-left="
#define LEVEL_LONG "--level="
#define MAP_LONG "--map-size="
#define DEBUG_LONG "--debug"
#define NEXT_LONG "--without-next"
#define PAUSE_SHORT "-p"
#define QUIT_SHORT "-q"
#define DEBUG_SHORT "-D"
#define TURN_SHORT "-t"
#define RIGHT_SHORT "-r"
#define LEFT_SHORT "-l"
#define LEVEL_SHORT "-L"
#define MAP_SHORT MAP_LONG
#define DEBUG_SHORT "-D"
#define NEXT_SHORT "-w"
#define STAR_NULL nb_star == 0
#define TOO_MANY_STARS nb_star > node->width
#define TOO_MANY_SPACES nb_space > node->width
#define TOO_LONG_TETRI my_strlen_tetrimino(line) > node->width
#define arg_dash_check check_dashes_valid_or_not(ac, av)
#define init_struct init_structure(&sets, &tetri_l)
#define term_check check_env_term(env) == ERROR
#define DEBUG_OR_HIDE av[i][1] == 'D' || av[i][1] == 'w'
#define settings_init my_settings_init(&sets, &tetri_l)
#define arg_check_count my_arg_count_check(av) == ERROR
#define FLAG_LIST "L:hl:r:t:d:q:p:wDm::"
#define OPT_LONG (sets->opt = getopt_long
#define OPT_LONG_FLAGS ac, av, FLAG_LIST, long_options, &sets->long_index)
#define ERROR_TERM "Error: TERM not found in environment\n"
#define ERROR_MAP "Error: Invalid map size\n"
#define ERROR_REP "Error: Multiple affectation of a same key\n"
#define ERROR_ARG "Error: Bad argument, check with --help\n"
#define ERROR_MAP_FIT "Error: Tetrimino doesn't fit in the given map\n"
#define ERROR_NO_VALID_TETRI "Error: No valid tetrimino\n"
#define ERROR 84
#define SUCCESS 0
#define HIGHSCORE "High Score:          %d"
#define SCORE "Current Score:       %d"
#define LINE "Lines:               %d"
#define LEVEL "Level:               %d"
#define TIMER "Timer:             %.4f"

#endif
