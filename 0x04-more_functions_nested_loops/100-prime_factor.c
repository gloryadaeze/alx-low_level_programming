#include <math.h>
#include <stdio.h>

/**
 * main - entry
 * Return: always 0
 */

int main(void)
{
	long prime, fx;
	long number = 612852475143;
	double square = sqrt(number);

	for  (prime = 1; prime <= square; prime++)
	{
		if ((number % prime) == 0)
		{
			fx = number / prime;
		}
	}
	printf("%ld\n", fx);
	return (0);
}
