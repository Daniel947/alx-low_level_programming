#include "main.h"
/**
 * swap_int : for swaping two integers
 * Return : 0.
 * @a : pointer one 
 * @b :pointer two
 * Author : Daniel Yamoah
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	a = *b;
	b = temp;

}
