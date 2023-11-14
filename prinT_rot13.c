#include "main.h"

/**
 * flush_rot13 - prints a string using rot13
 * @record: list of arguments from
 * Return: length of the outputed string
 */

int flush_rot13(va_list record)
{
	int u, v, w = 0, entire = 0;
	char g = va_arg(record, char *);
	char m[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char n[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	fflush(stdout);
	if (g == NULL)
		g = "(null)";
	for (u = 0; g[u]; u++)
	{
		fflush(stdout);
		w = 0;
		for (v = 0; m[v] && w == 0; v++)
		{
			if (g[u] == m[v])
			{
				_putchar(n[v]);
				entire++;
				w = 1;
			}
		}
		if (w == 0)
		{
			_putchar(g[u]);
			entire++;
		}
	}
	return (entire);
}
