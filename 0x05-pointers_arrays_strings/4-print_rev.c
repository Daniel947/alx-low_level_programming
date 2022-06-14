#include "main.h"
/**
 * print_rev - reversing  function
 * Return : 0.
 * @s : input parameter
 * Author : Daniel Yamoah
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
