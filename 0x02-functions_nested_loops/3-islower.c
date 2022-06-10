#include "main.h"
/**
 * _islower - Entry function
 * Return: 1 if c is lower
 * 0 if c is anything else.
 *
 * Author: Daniel Yamoah
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
