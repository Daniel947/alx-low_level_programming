#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	/*Print the zero value of n*/
	if (n == 0 || n < 1 )
	{
		printf("%d is zero\n", n);	
	}
	/*Print the negative value of n*/
	if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	/*Print the positive value of n*/
	else
		printf("%d is positive\n", n);
	return (0);
}
