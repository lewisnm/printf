#include "main.h"

/**
 * string_rev - print reverse of string
 * @record: argument
 * Return: Number of printed strings
 */

int string_rev(va_list record)
{
	char *g = va_arg(record, char *);
	int u;
	int m = 0;

	if (g == NULL)
		g = "(null)";
	while (g[m] != '\0')
		m++;
	fflush(stdout);
	for (u = m - 1; u >= 0; u--)
		_putchar(g[u]);
	return (m);
}
