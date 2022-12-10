#include <stdio.h>

/**
 * main - Entry
 * description: describe program
 * Return: Alway zero
 */

int main(void)
{
	int n;

	while (n < 10)
	{
		putchar(48 + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
