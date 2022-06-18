#include "main.h"
/**
 * print_numbers - functions for printing numbers
 * Return: 0 or 1
 * Author: Daniel Yamoah 
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
