#include <stdio.h>
/**
 * main - printing programs in lowercase except e and q
 * Return: 0 (success)
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
			continue;
		putchar(alp);
}

	putchar('\n');

	return (0);
}
