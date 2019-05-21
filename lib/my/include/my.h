/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** my.h
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "garbage_collector.h"
#define READ_SIZE 1
#define COND_1 (get_next_line_three(position) == 1
#define COND_1_2 get_next_line_three(position) != 0) ? stock : NULL

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(long nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *chang, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_word_array(char const *str);
char *my_strdup(char const *src);
int len(char const *str);
int my_line(char *str);
int my_len(char *str);
void display_rush1(int len, int line);
void display_rush2(int len, int line);
void display_rush345(int len, int line);
void display_rush3(int len, int line);
void display_rush4(int len, int line);
void display_rush5(int len, int line);
void display_else(char *str, int len, int line);
void rush3(char *str);
char *my_polish(char *str);
char *my_strtol(char *str, char *endptr);
int number(char *str);
int calculator(char *str);
int disp_starg(char const *s, ...);
void printf_int(va_list ap);
void printf_char(va_list ap);
void printf_str(va_list ap);
void (*p[11]) (va_list ap);
void stock(void);
int convert(char c, va_list ap);
int my_printf(char const *format, ...);
void printf_octal(va_list ap);
void printf_hexa(va_list ap);
void printf_hexa_maj(va_list ap);
void printf_unsint(va_list ap);
void printf_ptr(va_list ap);
void printf_binary(va_list ap);
void printf_uppers(va_list ap);
void my_printf_uppers(char *str);
void printf_upperc(va_list ap);
void my_printf_upperc(char c);
int printf_oct(char c);
int printf_octa(char *remaind, int length);
int nb_spaces(int i, const char* format);
int is_flag(int i, const char* format);
void printf_parser(const char* format, int len, va_list ap);
int printf_parser_two(const char* format, int len, va_list ap, int i);
int if_format(const char* format, int i, va_list ap);
int is_format(int i, const char* format);
int if_flag(const char* format, int i, va_list ap);
int is_flag(int i, const char* format);
int convert_format(char c, va_list ap, int i , const char* format);
int (*p1[5]) (va_list ap, const char* format, int i);
void stock_format(void);
int format_diese(va_list ap, const char* format, int i);
void printf_o(int x);
void printf_hexa2(int x);
void printf_hexa_maj2(int x);
int format_diese_x(va_list ap, const char* format, int i, int x);
int format_minus(va_list ap, const char* format, int i);
int format_blank(va_list ap, const char* format, int i);
int format_plus(va_list ap, const char* format, int i);
garbage_l *garbage_collector(void *, int toggle);
char *save_rest(char *, char *, int);
int check_end_of_line(char *, char *, int , int);
char *check_save(char *, char *, int);
char *get_next_line(int);
int get_next_line_two(int, char*, char*, char*);
int get_next_line_three(int);
int check_end_of_line_two(char *, int, char *);
void free_gnl(char *, char *);
char *my_str_clean(char *);
int my_width_before_after(char *);
int random_range(int, int);
char **my_double_strdup(char **, char **, int, int);
