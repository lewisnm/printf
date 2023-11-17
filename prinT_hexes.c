#include "main.h"

/**
 * print_hexes - Prints a base16 lowercase decimal
 * @hxlist: List of arguments comprising the variadic list
 * Return: Number of characters to be printed
 */

int print_hexes(va_list hxlist)
{
	unsigned int hex;
	int ln;
	int rem_hex;
	char *hx_rp;
	char *rv_hx;

	hex = va_arg(hxlist, unsigned int);

	if (hex == 0)
		return (_putchar('0'));
	if (hex < 1)
		return (-1);
	ln = base_size(hex, 16);
	hx_rp = malloc(sizeof(char) * ln + 1);
	if (hx_rp == NULL)
		return (-1);
	for (ln = 0; hex > 0; ln++)
	{
		rem_hex = hex % 16;
		if (rem_hex > 9)
		{
			rem_hex = hx_chk(rem_hex, 'X');
			hx_rp[ln] = rem_hex;
		}
		else
			hx_rp[ln] = rem_hex + 48;
		hex = hex / 16;
	}
	hx_rp[ln] = '\0';
	rv_hx = rev_output(hx_rp);
	if (rv_hx == NULL)
		return (-1);
	set_root(rv_hx);
	free(hx_rp);
	free(rv_hx);
	return (ln);
}
