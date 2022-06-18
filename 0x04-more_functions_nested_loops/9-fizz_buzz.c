#include <stdio.h>
/**
 * main - for fizz_buzz printing
 * Return: 0.
 * Author: Daniel Yamoah
 */
int main(void)
{
	int i = 0;

	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
		if (i != 100)
		{
			printf(" ");
		}
		i++;
	}
	return (0);
}
