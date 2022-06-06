#include <stdio.h>
/**
* main - Entry to code.
*
* Return: Always 0.
*
* Author: Daniel Yamoah
*/
int main(void)
{
	int comb;

	for (comb = 48; comb <= 57; comb++)
	{
		if (comb == 58)
		{
			break;
		}
		putchar(comb);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
