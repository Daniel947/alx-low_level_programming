#include <stdio.h>
/**
 * main - Entry funtion
 * @argc: argument count for main
 * @argv: array argument for main
 * Author: Daniel Yamoah
 */
int main(int argc, char* argv[])
{
	int count;

	if (argc > 0)
	{
		for (count = 0; count < argc; count++)
		{
			printf("%s\n",argv[count]);
		}
	}
	else
	{
		printf("\n");
	}
	return (0);
}
