#include "main.h"
/**
 * print_last_digit - function for printing last digit of number
 * Return: 0 (success)
 * @n - input int 
 * Author: Daniel Yamoah
 */
int print_last_digit(int n)
{
	int last;

	if (n < 0)
		last = -1 * (n % 10);
	else
		last = n % 10;

	_putchar(last + '0');
	return (last);
}
