#include <stdio.h>
#include "main.h"
/**
 * main -n Entry point.
 *
 * Return: always 0 (success).
 *
 * Author: Daniel Yamoah
 */
int main(void) 
{
	char alphabet[8] = "_putchar";
	int a = 0;

	while (a < 8)
	{
		_putchar(alphabet[a]);
		a++;
	}
	return 0;
}
