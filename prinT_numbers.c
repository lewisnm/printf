#include "main.h"

/**
 * numbs_print - prints integers
 * @record: all arguments
 * Return: returns characters printed
 */

int numbs_print(va_list record)
{
	int int_length;

	int_length = numbs_print(record);
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
		fig = x * -1;
	}
	else
		fig = x;

	for (; fig / visor > 9; )
		div *= 10;

	for (; div != 0; )
	{
		gith += _putchar('0' + fig / div);
		fig %= visor;
		visor /= 10;
	}
	return (gith);
}
