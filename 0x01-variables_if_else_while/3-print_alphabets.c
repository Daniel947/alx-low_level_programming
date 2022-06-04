#include <stdio.h>
#include <ctype.h>
/**
*
* main - Entry to code.
* Return: Always 0.
* Author: Daniel Yamoah
*/
int main(void)
{
	char alphabet = 'a'
	for (alphabet; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar(toupper(alphabet));
	}
	putchar('\n');
	return (0);
}
