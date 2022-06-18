#include "main.h"
/**
 * print_square - for print $ in diagonal form
 * Return: void
 * @size: input parameter for print_diagonal
 * Author:Daniel Yamoah
 */
void print_square(int size)
{
	int i = 0, m;

	while (i < size && size > 0)
	{
		m = 0;
		while (m < size)
		{
			_putchar('#');
			m++;
		}
		_putchar('\n');
		i++;
	}
	if (i == 0)
	{
		_putchar('\n');
	}
}
