#include "main.h"
/**
 * _isalpha - main function entry
 * @c : letter checker
 * Return: 1 if c is lower or upper
 * 0 if c anything else
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c <= 'A' && c >= 'Z'));
}
