#include <stdio.h>

/**
 * _sqrt - body of code
 * @x: input num
 *
 * Return: returns zero
 */
double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - finds the largest p f
 * @num: int type variable
 *
 */
void largest_prime_factor(long int num)
{
	int prmNu, largest;

	/* first divide the smallest prime number (two) */
	while (num % 2 == 0)
		num = num / 2;

	/* num must be odd so we proceed to the next prime number (plus two) */
	for (prmNu = 3; prmNu <= _sqrt(num); prmNu += 2)
	{
		while (num % prmNu == 0)
		{
			num = num / prmNu;
			largest = prmNu;
		}
	}
	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}

