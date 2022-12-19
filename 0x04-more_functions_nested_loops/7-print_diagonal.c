#include "main.h"
/**
 * print_diagonal - checker
 * @n: number
 * Return: no return
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n && n > 0)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar(92);
		_putchar('\n');
		i++;
	}
	if (i == 0)
	_putchar('\n');
}
