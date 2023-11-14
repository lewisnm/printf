#include "main.h"

/**
 * char_print - prints characters
 * @record: arguments passed
 * Return: 1(bytesize)
 */

int char_print(va_list record)
{
	_putchar(va_arg(record, int));
	return (1);
}
