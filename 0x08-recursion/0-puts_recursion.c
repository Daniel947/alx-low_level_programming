#include "main.h"
/**
 * _put_recursion - Entry point
 * @s: input parameter
 * Author : Daniel Yamoah
 */
void  _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
