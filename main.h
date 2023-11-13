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

struct change
{
	char *attri;
	int (*a)(va_list);
};
typedef struct change all_spesh;

int _printf(const char *format, ...);
int man_format(const char *format, all_spesh data_list, va_list the_list);
int numbs_print(va_list record);
int _putchar(char b);
int _puts(char *location);

#endif 
