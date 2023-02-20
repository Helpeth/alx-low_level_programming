#include <stdio.h>
/**
 * main - printing two digits
 * Return: 0 (success)
 */
int main(void)
{
	int n, i;

	for (n = '0'; n < '9'; n++)
	{

	for (i = n + 1; i <= '9'; n++)
	{
	if (i != n)
	{
	putchar(n);
	putchar(i);
	if (n == '8' && i == '9')
		continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	putchar('\n');
	return (0);
}
