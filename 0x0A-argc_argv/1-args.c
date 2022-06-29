#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: array argument parameter
 * Return: 0 success.
 * Author: Daniel Ymamoh
 */
int main (int argc,__attribute__ ((unused)) char* argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			count += argc;
		}
	}
	else
	{
		printf("\n");
	}
	printf("%d\n", count);
	return (0);
}
