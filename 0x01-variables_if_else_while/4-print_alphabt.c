#include <stdio.h>
/**
* main - Entry code function.
*
* Return: Always 0.
*
* Author: Daniel Yamoah
*
*/
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

	{
		if (alphabet == 'q')
			continue;
		else if (alphabet == 'e')
			continue;
		putchar(alphabet);
	}
	putchar('\n');
	return (0);
}
