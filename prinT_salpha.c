#include "main.h"

/**
 * prints_word - Prints a string
 * @records: list of arguments
 * Return: Will return the amount of characters printed.
 */

int prints_word(va_list records)
{
	int d;
	char *gta;

	gta = va_arg(records, char *);
	if (gta == NULL)
		gta = "(null)";
	for (d = 0; gta[d] != '\0'; d++)
		_putchar(gta[d]);
	return (d);
}
