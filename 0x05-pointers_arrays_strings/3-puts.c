#include "main.h"
/**
 * _putchars : print a string
 * Return: 0.
 * @str : input parameter
 * Author: Daniel Yamoah 
 */
void _puts(char *str)
{
	int i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
