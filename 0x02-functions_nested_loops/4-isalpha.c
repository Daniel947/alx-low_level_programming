#include "main.h"
/**
 * _isalpha - main function entry
 * @c : letter checker
 * Return: 1 if c is lower or upper
 * 0 if c anything else
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c <= 'A' && c >= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
