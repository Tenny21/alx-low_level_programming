#include <stdio.h>

/**
 * main - this is the bvody of the code
 *
 * return: must return an integer
 */
int main(void)
{
	printf("Sze of a char: %i byte(s)\n",sizeof(char));
	printf("Size of an int: %i byte(s)\n",sizeof(int));
	printf("Size of a long: %i byte(s)\n",sizeof(long int));
	printf("Size of long long int: %i byte(s)\n",sizeof(long long int));
	printf("Size of float: %i byte(s)\n",sizeof(float));
	return (0);
}

