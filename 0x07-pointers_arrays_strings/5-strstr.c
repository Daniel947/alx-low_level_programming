#include "main.h"
/** _strstr - function that that locate substring
 * @haystack: main string we will be finding our substring from
 * @needle: substring we will be finding
 * Return: 0 success.
 * Author: Daniel Yamoah 
 */
char * _strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *cphays = haystack;
		char *cneed = needle;
		while(*haystack && *needle *haystack == *cneed)
		{
			haystack++;
			cneed++;
		}
		if (!*cneed)
		{
			return (cphays);
		}
		haystack = cphays + 1;
	}
	return ('\0');
}
