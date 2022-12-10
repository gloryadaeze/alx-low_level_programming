#include <stdio.h>
/**
 * main - Entry
 * Description: programs description
 * Return: always zero
 */

int main(void)
{
	char le;

	for (le = 'z'; le >= 'a'; le--)
		putchar(le);
	putchar("\n");
	return (0);
}
