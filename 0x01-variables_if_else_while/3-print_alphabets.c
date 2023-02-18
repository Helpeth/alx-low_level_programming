#include <stdio.h>
/**
 * main - printing programs in uppercase, lowercase and new line
 * Return: 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
		putchar(alp);

	for (alp = 'A'; alp <= 'Z'; alp++)
		putchar(alp);

	putchar('\n');

	return (0);
}
