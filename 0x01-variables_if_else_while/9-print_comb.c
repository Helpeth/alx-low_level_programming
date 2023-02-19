#include <stdio.h>
/**
 * main - printing a single digit number
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 68; n < 78; n++)
	{
		putchar(n);
		if (n != 77)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
