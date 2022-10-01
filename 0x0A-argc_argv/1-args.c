#include <stdio.h>

/**
 * main - prints the num of arguments passed to it
 * @argc: argument count
 * @argv: potinter
 *
 * Return: returns an int
 */
int main(int argc, char __attribute__ ((unused))argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}

