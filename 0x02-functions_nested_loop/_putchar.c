#include <unistd.h>
/**
 * _putchar - function for display.
 *
 * Return: always 0 (success)
 *
 * Author: Daniel Yamoah 
 */
int  _putchar (char alphabet)
{
	return (write(1, &alphabet, 1));
}
