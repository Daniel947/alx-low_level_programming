#include <stdio.h>
#include <unistd.h>
/**
 * main- Entry point
 *
 * Return: 0 (success)
 *
 * Author: Daniel Yamoah
 */
int main(void)
{
	char string[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	write(2, string, sizeof(string));	
	return (1);
}
