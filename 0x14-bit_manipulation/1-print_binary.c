#include "main.h"

/**
 * print_binary - a prototype to print binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, num = 0;
	unsigned long int count;

	for (i = 63; i >= 0; i--)
	{
		count = n >> i;

		if (count & 1)
		{
			_putchar('1');
			num++;
		}
		else if (num)
			_putchar('0');
	}
	if (!num)
		_putchar('0');
}
