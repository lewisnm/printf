#include "main.h"

/**
 * _printf - mimics a the normal printf function
 * @format: a list of the arguments passed
 *
 * Return: number of characters
 */

int _printf(const char *format, ...)
{
	int char_count;
	all_spesh data_list[] = {
		{"%", perc_print},
		{"d", numbs_print},
		{"i", numbs_print},
		{"c", char_print},
		{"s", prints_word},
		{"b", numbs_binary},
		{"R", flush_rot13},
		{"r", string_rev},
		{"o", print_hex},
		{"x", print_hx},
		{"X", print_hexes},
		{"u", print_unint},
		{NULL, NULL}
	};
	va_list the_list;

	if (format == NULL)
		return (-1);

	va_start(the_list, format);
	char_count = man_format(format, data_list, the_list);
	va_end(the_list);
	return (char_count);
}
