#include "main.h"
/**
 * print_numbers - functions for printing numbers
 * Return: 0 or 1
 * Author: Daniel Yamoah 
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i == '2')
		{
			continue;
		}
		else if (i == '4')
		{
			continue;
		}
		else{
		_putchar(i);
		}
	}
	_putchar('\n');
}
