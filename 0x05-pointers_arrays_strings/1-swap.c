#include "main.h"
/**
 * swap_int - for swaping two integers
 * Return : void.
 * @a : pointer one
 * @b :pointer two
 * Author : Daniel Yamoah
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
