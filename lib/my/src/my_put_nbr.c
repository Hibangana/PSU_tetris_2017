/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** my_put_nbr.c
*/

void my_putchar(char c);

int my_put_nbr(long nb)
{
	if (nb < 0) {
		my_putchar('-');
		my_put_nbr(nb * (-1));
	} else {
		if (nb < 10) {
			my_putchar(nb + 48);
		} else {
			my_put_nbr(nb / 10);
			my_put_nbr(nb % 10);
		}
	}
	return (0);
}
