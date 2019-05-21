/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** my_getnbr.c
*/

int my_getnbr(char const *str)
{
	long num = 0;
	int i = 0;
	int sign = 1;

	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-') {
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] && (str[i] >= '0' && str[i] <= '9')) {
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (sign * num);
}
