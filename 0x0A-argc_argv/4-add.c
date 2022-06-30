#include "main.h"
/**
 * main - Edntry point 
 * Return: 0 success
 * @argc: array count 
 * @argv: array argument
 * Author: Daniel Yamoah
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;
	if (argc < 1)
	{
		for (i = 0; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (isdigit(argv[i][j] == 0)
						{
						printf("Error\n");
						return (1);
						}
			}
			sum += atoi(argv[i]);
		}
	}
	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}
	printf("%d\n", sum);
	return (0);
}
