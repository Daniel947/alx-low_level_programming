#include "main.h"
/**
 * _strbrk - function that searches a string of any of a set of bytes
 * @s: main string we will search our substring from 
 * @accept: substring we will be searching for
 * Return: 0 success.
 * Author: Daniel Yamoah 
 */
char *_strbrk(char *, char *accept)
{
	int i = 0;
	int j = 0;
	while(s[i])
	{
		while(accept[j])
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
			j++;
		}
		j = 0;
		i++;
	}
	return ('\0');
}
