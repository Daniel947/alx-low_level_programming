#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 *
 * Author: Daniel Yamoah
 */
int main(void)
{
	char char_1 = sizeof(char);
	char int_1 = sizeof(int);
	char long_int = sizeof(long int);
	char long_long_int = sizeof(long long int);
	char float_1 = sizeof(float);

	printf("Size of a char: %i byte(s) \n", char_1);
	printf("Size of an int: %i byte(s) \n", int_1);
	printf("Size of a long int: %i byte(s) \n", long_int);
	printf("Size of a long long int: %i byte(s) \n", long_long_int);
	printf("Size of a float: %i byte(s) \n", float_1);
	return (0);
}
