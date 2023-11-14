#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * struct change - defines a pointer to functions and symbols
 *
 * @attri: the attributes
 * @a: function associated
 */

typedef struct
{
	char *attri;
	int (*a)(va_list);
} all_spesh;


int _printf(const char *format, ...);
int man_format(const char *format, all_spesh *data_list, va_list the_list);
int numbs_out(va_list ptrs);
int numbs_print(va_list record);
int _putchar(char b);
int _puts(char *location);
int char_print(va_list record);
int prints_word(va_list records);
int perc_print(__attribute__((unused))va_list record);

#endif
