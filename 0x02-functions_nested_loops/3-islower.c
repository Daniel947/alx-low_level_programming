#include "main.h"
/**
 * _islower - Entry function
 *
 * Return: always 0 (success).
 *
 * Author: Daniel Yamoah
 */
int _islower(int c)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
