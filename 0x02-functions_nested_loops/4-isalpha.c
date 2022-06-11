#include "main.h"
/**
 * _isalpha - main function entry
 * @n : letter checker
 * Return: 1 or 0.
 * Author: Daniel Yamoah
 */
int _isalpha(int n)
{
	return ((n >= 97 && n <= 122) || (n >= 65 && n <= 90));
}
