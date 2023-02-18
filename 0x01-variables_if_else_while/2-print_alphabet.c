#include <stdio.h>
/**
 * main - printing alphabet in lowercase
 * Return: 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
