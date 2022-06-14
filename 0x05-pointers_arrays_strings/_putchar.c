#include <unistd.h>
/**
 * _putchar - writes the character letter to stdout
 * @letter: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char letter)
{
	return (write(1, &letter, 1));
}
