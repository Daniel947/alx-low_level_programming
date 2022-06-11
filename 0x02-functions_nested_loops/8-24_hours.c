#include "main.h"
/**
 * jack_bauer - entry function
 * Return: 0
 * Author: Daniel Yamoah
 */
void jack_bauer(void)
{
	int hour1;
	int hour2;
	int min1;
	int min2;
	int b = 9;

	hour2 = 0;
	while (hour2 <= 2)
	{
		if (hour2 == 2)
		{
			b = 3;
		}
		hour1 = 0;
		while (hour1 <= b)
		{
			min2 = 0;
			while (min2 <= 5)
			{
				min1 = 0;
				while (min1 <= 9)
				{
					_putchar('0' + hour2);
					_putchar('0' + hour1);
					_putchar(':');
					_putchar('0' + min2);
					_putchar('0' + min1);
					_putchar('\n');
					min1++;
				}
				min2++;
			}
			hour1++;
		}
		hour2++;
	}
}
