#include "main.h"

/**
 * output_string - print exclusuives string.
 * @k : argumen t.
 * Return: the length of the string.
 */

int output_string(va_list k)
{
	register short fig = 0;
	char *pes, *x = va_arg(k, char *);
	int counter;

	if (!x)
		return (_puts(NULL_STRAND));
	for (; *x; x++)
	{
		if (isNonAlpha(*x))
		{
			counter += _puts("\\x");
			pes = convert(*x, 16, 0);
			if (!pes[1])
				fig += _putchar('0');
			fig += _puts(pes);
		}
		else
			fig += _putchar(*x);
	}
	return (fig);
}

/**
 * isNonAlpha - determines if char is a non-
 * alphanumeric char on ASCII table
 * @g: input char
 * Return: true or false
 */

int isNonAlpha(char g)
{
	return ((g > 0 && g < 32) || g >= 127);
}

/**
 * convert - converts number and base into string
 * @digit: input number
 * @root: input base
 * @smalletters: flag if hexa values need to be lowercase
 * Return: result string
 */

char *convert(unsigned long int digit, int root, int smalletters)
{
	static char *iter;
	static char buffer[50];
	char *str;

	iter = (smalletters)
		? "0123456789abcdef"
		: "0123456789ABCDEF";
	str = &buffer[49];
	*str = NUL;
	do {
		*--str = iter[digit % root];
		digit /= root;
	} while (digit);

	return (str);
}
