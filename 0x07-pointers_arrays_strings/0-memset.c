#include "main.h"
/**
 * *_memset - function that fills memory with a constant byte
 * return : 0 or 1.
 * @s : input parameter 1.
 * @b : input parameter 2.
 * @n : input parameter 3.
 * Author : Daniel Yamoah
 */
char *_memset(char *s, char b ,unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
