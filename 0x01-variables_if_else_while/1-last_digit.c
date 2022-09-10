#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - This is the body of the code
 *
 * Return: must return an integer value always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("Last digit of %d is %d and is greater than %d\n", n, n % 10, 5);
	} else if (n % 10 == 0)
	{
		printf("Last digit of %d is %d and is %d\n", n, n % 10, 0);
	} else if (n % 10 > 6 && n % 10 != 0)
	{	
		printf("Last digit of %d is %d and is less than %d and not %d\n", n, n % 10, 6, 0);
	}
	return (0);
}

