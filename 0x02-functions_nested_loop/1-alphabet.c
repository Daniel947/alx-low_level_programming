#include "codestd.h"
/**
 * print_alphabet - Entry function.
 *
 * Return: Always 0 (success)
 *
 * Author: Daniel Yamoah
 */
void print_alphabet(void)
{
	int a;

	for (a= 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
