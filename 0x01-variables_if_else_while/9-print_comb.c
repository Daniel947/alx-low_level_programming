#include <stdio.h>
/**
* main - Entry to code.
*
* Return: Always 0.
*
* Author: Daniel Yamoah
*/
int main(void)
{
  int comb;

  for (comb = '0'; comb <= '9'; comb++)
  {
    if (comb == '9')
    {
      break;
    }
    putchar(comb);
    putchar(',');
    putchar(' ');
  }
  putchar('\n');
  return (0);
}
