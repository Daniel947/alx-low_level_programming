#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print from n to 98
 * Return: 0 (success)
 * Author: Daniel Yamoah
 * @n : input value
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	_putchar('\n');
}
