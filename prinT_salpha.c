#include "main.h"

/**
 * prints_word - outputs a sring
 * @records: contains the string
 * Returns: string length
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
