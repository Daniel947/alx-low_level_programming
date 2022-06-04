#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Lazandor
* Return : Always 0
* Author : Daniel Yamoah
*
*/
int main(void)
{
	int n;
	int n_1;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/* getting the last digit */
	n_1 = n % 10;
	/* if last digit is greater than 5*/
	if (n_1 > 5) 
	{
		printf("Last digit of %d is %d and is greater than 5\n", n , n_1);
	}
	else if (n_1 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n , n_1);
	}
	else if (n_1 < 6 || n_1 != 0 )
	{
		printf("Last digit of %d is %d and not 0", n , n_1);
	}
	else return (0);
	return (0);
}
