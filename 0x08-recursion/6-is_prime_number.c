#include "main.h"

/**
 * is_divisible - returns number
 * @num: integer
 * @div: num
 *
 * Return: int void
 */
int is_divisible(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);
	return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - returns a num that is a prime
 * @n: int
 *
 * Return: int
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (is_divisible(n, div));
}

