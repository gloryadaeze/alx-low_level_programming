#include <stdio.h>
/**
 * main - Entry
 * Description: 'the programs's description'
 * Return: Always zero
 */
int main(void)
{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}

