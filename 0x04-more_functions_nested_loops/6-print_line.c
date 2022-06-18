#include "main.h"
/**
 * print_line - print line with input parameter
 * Return: void
 * @n: number of lines to be printed.
 * Author: Daniel Yamoah
 */
void print_line(int n)
{
	int i = 0;

	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
