#include <stdio.h>
#include <unistd.h>



/**
 *
 *  * _putchar - writes the character c to stdout
 *
 *   * @c: The character to print
 *
 *    *
 *
 *     * Return: On success 1.
 *
 *      * On error, -1 is returned, and errno is set appropriately.
 *
 *       */

int _putchar(char c)

{

		return (write(1, &c, 1));

}

/** main - The body of the code
 * Description: prints _putchar to the standard output
 * Return: must return an integer
 */

int main(void)
{
	int i = _putchar;

	putchar("%d\n", i);
	return (0);
}

