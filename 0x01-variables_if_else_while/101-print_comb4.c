#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 * Description: 'description of the programs'
 * Request: always zero
 */

int main(void)
{
	int i;
	int n;
	int j = 0;

	while (j < 10)
	{
		n = 0;
		while (n < 10)
		{
			i = 0;
			while (i < 10)
			{
				if (i != n && n != j && j < n && n < i)
				{
					putchar('0' + j);
					putchar('0' + n);
					putchar('0' + i);
					if (i + n + j != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}

				i++;
			}
			n++;
		}
		j++;
	}

	putchar('\n');
	return (0);
}
