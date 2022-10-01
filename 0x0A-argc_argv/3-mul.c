#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds two number
 * @argc: argument count
 * @argv: pointer
 *
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

