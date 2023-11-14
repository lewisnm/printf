#ifndef PRINT_H
#define PRINT_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
/**
 * struct all_spesh - defines a structure for symbols and functions
 *
 * @attri: The operator
 * @a: The function associated
 */

typedef struct all_spesh
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
<<<<<<< HEAD
int print_hex(va_list hexes);
=======
int numbs_binary(va_list record);
char *rev_output(char *f);
unsigned int base_size(unsigned int fig, int foot);
char *_memcpy(char *end, char *root, unsigned int p);
void set_root(char *gti);
int flush_rot13(va_list record);
int string_rev(va_list record);
>>>>>>> 01f1945b9d396235fa0a7527bcce4cd8df078bfd

#endif
