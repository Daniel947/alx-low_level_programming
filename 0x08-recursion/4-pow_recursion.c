#include "main.h"
/**
 * _pow_recursion -  function that returns the value of x raised to the power of y.
 * @x: 1st input parameter
 * @y: 2nd input parameter 
 * Return: 0 or -1
 * Author: Daniel Yamoah 
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y != 0)
	{
		return (x * _pow_recursion(x , y-1));
	}
	else
	{
		return (1);
	}
}
