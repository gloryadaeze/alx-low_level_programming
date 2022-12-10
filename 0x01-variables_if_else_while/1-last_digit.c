#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes there */
/**
 * main - Entry
 * Description: 'The programs discription'
 * Return: Always zero
 */
int main(void)
{
	int n, lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastNum = n % 10;
	if (lastNum > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastNum);
	else if (lastNum == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastNum);
	else
		printf("Last digit of the %d is %d and is less than 6 not 0\n", n, lastNum);
	return (0);
}
