#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int exclusive = n ^ m;

	do {
		if (exclusive & 1ul)
			count++;
		exclusive = exclusive >> 1;
	} while (exclusive);

	return (count);
}

