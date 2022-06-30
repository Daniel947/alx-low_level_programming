#include "main.h"
/**
 * *_memcpy - function that copies memory area.
 * @dest: 1st parameter
 * @src : 2nd parameter
 * @n : 3rd parameter
 * Author: Daniel Yamoah
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *cdest = (char *)dest;
	char *csrc = (char *)src;
	i = 0;
	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (cdest);
}
