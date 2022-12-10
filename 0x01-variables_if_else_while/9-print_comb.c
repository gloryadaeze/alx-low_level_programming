#include <stdio.h>

/**
 * main - Entry
 * description: describe program
 * Return: Alway zero
 */

int main(void)
{
	int n;

	for (n = 48; n < 58; n++)

		putchar(n);

	if (n != 57)
	{
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
