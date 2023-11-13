#include "main.h"

/**
 * _putchar - prints out b to the console
 * @b: the character to be printed
 *
 * Return: 1 success -1 error
 */

int _putchar(char b)
{
	return (write(1, &b, 1));
}

/**
 * _puts - prints a string
 * @location: pointer to the string
 * Return: number of chars printed
 */
int _puts(char *location)
{
	register short x;

	for (x = 0; location[x]; x++)
		_putchar(location[x]);
	return (x);
}
