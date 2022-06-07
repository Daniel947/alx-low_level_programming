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

	printf("size of a char: %d byte(s) \n", char_1);
	printf("size of an int: %d byte(s) \n", int_1);
	printf("size of a long int: %d byte(s) \n", long_int);
	printf("size of a long long: %d byte(s) \n", long_long_int);
	printf("size of a float: %d byte(s) \n", float_1);
	return (0);
}
