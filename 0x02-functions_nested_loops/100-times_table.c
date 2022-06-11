
#include "main.h"
/**
 * print_times_table - prints times table
 * @n : times table to use
 * Return:void
 */

void print_times_table(int n)
{
int m = 0, mon, o;

if (n < 0 || n > 15)
	return;

while (o <= n)
{
	for (o = 0; o <= n; o++)
	{
		mon = m * o;
		if (o == 0)
			_putchar('0' + mon);
		else if (mon < 10)
		{
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + mon);
		}
		else if (mon < 100)
		{
			_putchar(' ');
			_putchar('0' + mon / 10);
			_putchar('0' + mon % 10);
		}
		else
		{
			_putchar('0' + mon / 100);
			_putchar('0' + (mon - 100) / 10);
			_putchar('0' + mon % 10);
		}
		if (o < n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
	m++;
}
}
