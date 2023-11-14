#include "main.h"

/**
 * numbs_print - prints integers
 * @record: all arguments
 * Return: returns characters printed
 */

int numbs_print(va_list record)
{
	int int_length;

	int_length = numbs_out(record);
	return (int_length);
}

/**
 * numbs_out - prints the number given
 * @ptrs: number of argumentss
 * Return: the number of arguments printed
 */

int numbs_out(va_list ptrs)
{
	int x;
	int visor;
	int gith;
	unsigned int fig;

	x = va_arg(ptrs, int);
	visor = 1;
	gith = 0;

	if (x < 0)
	{
		gith += _putchar('-');
		fig = (unsigned int)(x * -1);
	}
	else
		fig = (unsigned int)x;

	while (fig / visor > 9)
	{
		visor *= 10;
	}

	while (visor != 0)
	{
		gith += _putchar('0' + fig / visor);
		fig %= visor;
		visor /= 10;
	}
	return (gith);
}
