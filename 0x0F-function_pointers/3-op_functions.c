#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - adds two numbers
 * @a: fitst num
 * @b: sec num
 *
 * Return: int
 */
int op_add(int a, int b)
{
	int result = a + b;

	return (result);
}
/**
 * op_sub - subs a from b
 * @a: first num
 * @b: sec num
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	int res = a - b;

	return (res);
}
/**
 * op_mul - multiples to nums
 * @a: first num
 * @b: sec num
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	int res = a * b;

	return (res);
}
/**
 * op_div - divides 2nums
 * @a: first num
 * @b: sec num
 *
 * Return: int
 */
int op_div(int a, int b)
{
	int res = a / b;

	return (res);
}
/**
 * op_mod - returns the remainder of a by b
 * @a: first num
 * @b: sec num
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	int res = a % b;

	return (res);
}
