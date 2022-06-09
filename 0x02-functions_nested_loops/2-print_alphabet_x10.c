#include "main.h"
/**
 * print_alphabet_x10 - Entry function.
 *
 * Return: Always 0 (success).
 *
 * Author: Daniel Yamoah.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int a;
	
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		i++;
	}
}
