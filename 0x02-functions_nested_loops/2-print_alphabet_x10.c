#include "main.h"

/*
 * print_alphabet_x10 - Print abc 10 times
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	char c;
	int i = 0;

	while (i < 10)
	{
		c = 'a';

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
