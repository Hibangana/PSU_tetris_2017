/*
** EPITECH PROJECT, 2018
** struct.h
** File description:
** struct.h
*/

#ifndef GARBAGE_COLLECTOR_H
#define GARBAGE_COLLECTOR_H

typedef struct garbage {
	void *ptr;
	struct garbage *next;
} garbage;

typedef struct garbage_l {
	struct garbage *head;
} garbage_l;

#endif
