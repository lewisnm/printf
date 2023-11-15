#include "main.h"

/**
 * print_hex - Prints octal base representation of a number
 * @hexes: Represents all additional arguments
 * Return: Number of printed characters
 */

int print_hex(va_list hexes)
{
	unsigned int hex;
	int ln;
	char *hex_rep;
	char *hex_str;

	hex = va_arg(hexes, unsigned int);

	if (hex == 0)
		return (_putchar('0'));
	if (hex < 1)
		return (-1);
	ln = base_size(hex, 8);

	hex_rep = malloc(sizeof(char) * ln + 1);
	if (hex_rep == NULL)
		return (-1);
	for (ln = 0; hex > 0; ln++)
	{
		hex_rep[ln] = (hex % 8) + 48;
		hex = hex / 8;

	}
	hex_rep[ln] = '\0';
	hex_str = rev_output(hex_rep);
	if (hex_str == NULL)
		return (-1);

	set_root(hex_str);
	free(hex_rep);
	free(hex_str);
	return (ln);
}
