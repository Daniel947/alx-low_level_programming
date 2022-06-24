#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer  is a prime number, otherwise return 0 .
 * @n : input parameter
 * Return : 0 or 1.
 * Author : Daniel Yamoah
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));

}

int check_prime(int n ,int res)
{
	if (res >= n && n > 1)
	{
		return (1);
	}
	else if (n % res ==0 ||n <= 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, res + 1));
	}
}
