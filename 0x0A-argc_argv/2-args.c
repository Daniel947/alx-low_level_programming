#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 success.
 * @argc: argument count 
 * @argv: array argument parameter
 * Author : Daniel Yamoah
 */
int main(int argc, char *argv[])
{
	int count;
	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n", argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
