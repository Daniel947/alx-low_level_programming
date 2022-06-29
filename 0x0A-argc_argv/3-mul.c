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
	int count;
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argc > 1)
	{
		for (count = 0; count < argc; count++)
		{
			mul = atoi(argv[count]) * atoi(argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	printf("%d\n", mul);
	return (0);
}
