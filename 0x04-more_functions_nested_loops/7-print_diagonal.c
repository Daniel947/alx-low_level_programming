#include "main.h"
/**
 * print_diagonal - for print $ in diagonal form
 * Return: void
 * @n: input parameter for print_diagonal
 * Author:Daniel Yamoah
 */
void print_diagonal(int n)
{
	int i = 0, m;

	while (i < n && n > 0)
	{
		m = 0;
		while (m < i)
		{
			_putchar(' ');
			m++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
