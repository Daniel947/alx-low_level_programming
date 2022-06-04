#include <stdlib.h>
#include <stdio.h>
/**
*
* main - Lanzandor.
* Return: Always 0.
* Author: Daniel Yamoah
*/
int main()
{
	/* Variable for storing the alphabets*/
       	int alphabet = 'a';
	/* Looping through the alpahbets with for-loop */
	for (alphabet; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
