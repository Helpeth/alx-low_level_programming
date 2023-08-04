#include "main.h"

/**
 * get_endianness - prototype that checks endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *c = (char *) &a;

	return ((int)*c);
}
