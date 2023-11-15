#include "main.h"

/**
 * print_unint - Prints unsigned integers
 * @hxlist: List of variadic arguments
 * Return: Number of numbers to be printed
 */

int print_unint(va_list hxlist)
{
	unsigned int gid;

	gid = va_arg(hxlist, unsigned int);

	if (gid == 0)
		return (print_unnum(gid));

	if (gid < 1)
		return (-1);
	return (print_unnum(gid));
}


/**
 * print_unnum - Prints an unsigned number
 * @x: unsigned integer for printing
 * Return: Number of numbers to be printed
 */

int print_unnum(unsigned int x)
{
	int snap;
	int chat;
	unsigned int gid;

	snap = 1;
	chat = 0;

	gid = x;

	for (; gid / snap > 9; )
		snap *= 10;

	for (; snap != 0; )
	{
		chat += _putchar('0' + gid / snap);
		gid %= snap;
		snap /= 10;
	}

	return (chat);
}
