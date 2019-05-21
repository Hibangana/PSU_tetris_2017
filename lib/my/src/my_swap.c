/*
** EPITECH PROJECT, 2017
** my_swap.c
** File description:
** my_swap.c
*/

void my_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
