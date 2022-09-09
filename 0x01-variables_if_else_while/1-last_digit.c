
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Find the last digit of the number
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
        int num;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	
	num = n;
	n = n % 10;
	if (n > 5)
	{
	  printf("Last digit of %d is %d and is greater than 5\n", num, n);
	}
	else if (n == 0)
	{
	  printf("Last digit of %d is %d and is 0\n", num, n);
	}
	else
	{
	  printf("Last digit %d is %d and is less than 6 and not 0\n", num, n);
	}
	return (0);
}
