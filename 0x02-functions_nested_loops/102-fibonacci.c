#include <studio.h>

/**
 * main - entry
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int a = 0, b = 1, next;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%lu", next);

		if (i < 49)
		{
			printf(", ");
		}
		i++;

	}
	putchar('\n');
	return (0);
}

