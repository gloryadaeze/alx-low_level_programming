#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry
 * Return: always 0
 */

int main(void)
{
	long prime = 612852475143, fp;

	while (fp < (prime / 2))
	{
		if ((prime % 2) == 0)
		{
			prime /= 2;
			continue;
		}
		for (fp = 3; fp < (prime / 2); fp += 2)
		{
			if ((prime % fp) == 0)
				prime /= fp;
	}
	printf("%ld\n", prime);
	return (0);
}
