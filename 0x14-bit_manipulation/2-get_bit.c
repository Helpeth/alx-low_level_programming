#include "main.h"

/**
 * get_bit - a prototype to return value of a bit at an index to decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return (n >> index & 1);
}
