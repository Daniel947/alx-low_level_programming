#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
*
* main - Lanzandor.
* Return: Always 0.
* Author: Daniel Yamoah
*/
int main(void)
{
/* Variable for storing the alphabets*/
char alphabet;

/* Looping through the alpahbets with for-loop */
for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
{
	putchar(alphabet);
}
putchar('\n');
return (0);
}
