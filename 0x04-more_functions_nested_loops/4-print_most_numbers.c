#include "main.h"
/**
 * print_most_numbers - checker
 * Return: always 0
 */

void print_most_numbers(void)
{
	int i, j;

	for (i = 0; i <= 10; 1++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}
