#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: main string 
 * @accept: substring 
 * Return: 0 success.
 * Author: Daniel Yamoah
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int i = 0;
	int j = 0;
	while (s[i] != ' ' && s[i])
	{
		while(accept[j])
		{
			if (accept[j] == s[i])
			{
				cont++;
			}
			j++;
		}
		i++;
	}
	return (cont);
}
