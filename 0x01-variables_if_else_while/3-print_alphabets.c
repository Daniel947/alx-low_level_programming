#include <stdio.h>
#include <ctype.h>
/**
* main - Entry code function.
*
* Return: Always 0.
*
* Author:Daniel Yamoah 
*/
int main(void)
{
	char alphabet;
	
	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (alphabet = 'A'; alphabet <= 'Z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
