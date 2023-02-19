#include <stdio.h>
/**
 * main - printing numbers and letters
 * Return: 0 (success)
 */
int main(void)
{
	int i;
	char alp;

	for (i = 0; i <= 9; i++)
		putchar((i % 10) + '0');

	for (alp = 'a'; alp <= 'f'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
