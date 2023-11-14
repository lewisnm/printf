#include "main.h"

/**
 * numbs_binary - Converts numbs in base ten to binary
 * @record: List of arguments passed to this function
 * Return: The length of the number printed
 */

int numbs_binary(va_list record)
{
	unsigned int fig;
	int p, size;
	char *gta;
	char *rev_gta;

	fig = va_arg(record, unsigned int);
	if (fig == 0)
		return (_putchar('0'));
	if (fig < 1)
		return (-1);
	size = 0;
	size = base_size(size, 2);
	gta = malloc(sizeof(char) * size + 1);
	if (gta == NULL)
		return (-1);

	for (p = 0; fig > 0; p++)
	{
		if (fig % 2 == 0)
			gta[p] = '0';
		else
			gta[p] = '1';
		fig = fig / 2;
	}
	gta[p] = '\0';
	rev_gta = rev_output(gta);
	if (rev_gta == NULL)
		return (-1);
	set_root(rev_gta);
	free(gta);
	free(rev_gta);
	return (size);
}
