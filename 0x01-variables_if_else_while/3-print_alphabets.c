#include <stdio.>
/*
*
* main - Entry to code function
* Return: Always 0.
* Author: Daniel Yamoah 
*/ 
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
		putchar(toupper(alphabet));
	}
	putchar('\n');
	return (0);
}
