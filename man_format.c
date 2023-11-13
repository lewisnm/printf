#include "main.h"
/**
 * man_format - outputs the necessary string passed
 * @format: the container with the string
 * @data_list: a list of the specifiers
 * @the_list: arguments being received by the function
 *
 * Return:the number of characters printed
 */
int man_format(const char *format, all_spesh data_list, va_list the_list)
{
	int m, l, num_sto, char_count;

	char_count = 0;
	for (m = 0; format[m] != '\0'; m++)
	{
		if (format[m] == '%')
		{
			for (l = 0; data_list[l].attri != NULL; l++)
			{
				if (format[m + 1] == data_list[l].attri[0])
				{
					num_sto = data_list[l].a(the_list);
					if (num_sto == -1)
						return (-1);
					char_count += num_sto;
					break;
				}
			}
			if (data_list[l].attri == NULL && format[m + 1] != ' ')
			{
				if (format[m + 1] != '\0')
				{
					_putchar(format[m]);
					_putchar(format[m + 1]);
					char_count = char_count + 2;
				}
				else
					return (-1);
			}
			m = m + 1;
		}
		else
		{
			_putchar(format[m]);
			char_count++;
		}
	}
	return (char_count);
}
