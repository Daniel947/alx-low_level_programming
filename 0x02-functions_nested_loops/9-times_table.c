#include "main.h"
/**
 * times_table - function for printing times table
 * Return: 0 (success)
 * Author: Daniel Yamoah 
 */
void times_table(void)
{
	int n = 0;
	int m;
	int o;

	while (n <= 9)
	{
		m = 0;
		while (m <= 9)
		{
			o = n * m;
			if (m == 0)
			{
				_putchar('0' + o);
			}
			else if (o < 10)
			{
				_putchar(' ');
				_putchar('0' + o);
			}
			else
			{
				_putchar('0' + o / 10);
				_putchar('0' + o % 10);
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			m++;
		}
		_putchar('\n');
		n++;
	}
}
