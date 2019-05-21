/*
** EPITECH PROJECT, 2018
** display_usage
** File description:
** display_usage
*/

#include "my.h"

void display_usage(char *str)
{
	my_printf("Usage:  ");
	my_printf("%s", str);
	my_printf(" [options]\nOptions:\n");
	my_printf(" --help               Display this help\n");
	my_printf(" -L --level={num}     Start Tetris at level num (def: 1)\n");
	my_printf(" -l --key-left={K}    Move the tetrimino LEFT using the ");
	my_printf("K key (def: left arrow)\n");
	my_printf(" -r --key-right={K}   Move the tetrimino RIGHT using the ");
	my_printf("K key (def: right arrow)\n");
	my_printf(" -t --key-turn={K}    TURN the tetrimino clockwise 90d ");
	my_printf("using the K key (def: top arrow)\n");
	my_printf(" -d --key-drop={K}    DROP the tetrimino using the K key");
	my_printf(" (def: down arrow)\n");
	my_printf(" -q --key-quit={K}    QUIT the game using the K key ");
	my_printf("(def: 'q' key)\n");
	my_printf(" -p --key-pause={K}   PAUSE/RESTART the game using the K");
	my_printf(" key (def: space bar)\n");
	my_printf(" --map-size={row,col} Set the numbers of rows and ");
	my_printf("columns of the map (def: 20,10)\n");
	my_printf(" -w --without-next    Hide next tetrimino (def: false)\n");
	my_printf(" -D --debug           Debug mode (def: false)\n");
}
