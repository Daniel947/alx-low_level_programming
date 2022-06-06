#include <stdio.h>
/**
* main - Entry function.
*
* Return: value 0.
*
* Author: Daniel Yamoah
*/
int main(void)
{
	int numberz;

	for (numberz = 'z'; numberz >= 'a'; numberz--)
	{
		putchar(numberz);
	}
	putchar('\n');
	return (0);
}
