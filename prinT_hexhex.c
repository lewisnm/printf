#include "main.h"

/**
 * print_hexhex - Prints hex number.
 * @hex: Function argument
 * Return: Pacer
 */

int print_hexhex(unsigned long int hex)
{
	long int li;
	long int *arr;
	long int pacer = 0;
	unsigned long int track = hex;

	while (hex / 16 != 0)
	{
		hex /= 16;
		pacer++;
	}
	pacer++;
	arr = malloc(pacer * sizeof(long int));

	for (li = 0; li < pacer; li++)
	{
		arr[li] = track % 16;
		track /= 16;
	}
	for (li = pacer - 1; li >= 0; li--)
	{
		if (arr[li] > 9)
			arr[li] = arr[li] + 39;
		_putchar(arr[li] + '0');
	}
	free(arr);
	return (pacer);
}
