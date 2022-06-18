#include "main.h"
#include <stdio.h>
/**
 * print_triangle - for printing triangle
 * Return: void
 * @size: input parameter for the function.
 * Author: Daniel Yamoah
 */
void print_triangle(int size)
{
	int i = 0, m;

       while (i <= size && size > 0)
       {
	       m = 0;
	       while (m < size -i)
	       {
		       _putchar(' ');
		       m++;
	       }
	       m = 0;
	       while (m < i)
	       {
		       _putchar('#');
		       m++;
	       }
	       _putchar('\n');
	       i++;
       }
       if (i == 1)
       {
	       _putchar('\n');
       }
}
