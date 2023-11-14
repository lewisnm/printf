#include "main.h"

/**
 * rev_output - reverses a string
 *
 * @f: string to reverse
 * Return: A pointer to a character
 */

char *rev_output(char *f)
{
	int dist;
	int front;
	char spx;
	char *end;

	for (dist = 0; f[dist] != '\0'; dist++)
	{}

	end = malloc(sizeof(char) * dist + 1);
	if (end == NULL)
		return (NULL);

	_memcpy(end, f, dist);
	for (front = 0; front < dist; front++, dist--)
	{
		spx = end[dist - 1];
		end[dist - 1] = end[front];
		end[front] = spx;
	}
	return (end);
}

/**
 * base_size - breaks down the code of the octal number
 * @fig: The number for which the length is being calculated
 * @foot: Base to be calculated
 * Return: An integer representing the length of a number
 */

unsigned int base_size(unsigned int fig, int foot)
{
	unsigned int k;

	for (k = 0; fig > 0; k++)
	{
		fig = fig / foot;
	}
	return (k);
}


/**
 * _memcpy - copies memory area
 * @end: transfer location
 * @root : location where its coming from
 * @p: number of bytes to copy
 * Return: returns a pointer to end.
 */

char *_memcpy(char *end, char *root, unsigned int p)
{
	unsigned int z;

	for (z = 0; z < p; z++)
		end[z] = root[z];
	end[z] = '\0';
	return (end);
}

/**
 * set_root - sends characters to be printed to the std output
 * @gti: String to parse
 */

void set_root(char *gti)
{
	int h;

	for (h = 0; gti[h] != '\0'; h++)
		_putchar(gti[h]);
	_putchar('\n');
}
