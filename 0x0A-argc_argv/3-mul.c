#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Return: 1 or 0.
 * @argv: array argument
 * @argc: argument counter
 * Author: Daniel Yamoah
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
