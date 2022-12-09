#include <stdio.h>
/**
 * main- Entry point
 * Description: 'programs description'
 * Return: zero if exited, otherwise non-zero
 */
int main(void)
{
	printf("size of a char: %d bytes(s)\n", sizeof(char));
	printf("size of an int: %d bytes(s)\n", sizeof(int));
	printf("size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %d bytes(s)\n", sizeof(long long int));
	printf("size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
