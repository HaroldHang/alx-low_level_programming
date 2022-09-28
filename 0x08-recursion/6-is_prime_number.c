#include <stdio.h>
#include <math.h>
int check_prime(int number, int start);
/**
 *is_prime_number - check if number is prime
 *@n: the number
 * Return: Always 0 (Success)
 */
int is_prime_number(int n)
{
return (check_prime(n, n - 1));
}

/**
 *check_prime - performs the prime checks
 *@number: the number to check 
 *@start: the start number
 * Return: Always 0 (Success)
 */
int check_prime(int number, int start)
{
if (start == 1)
return (1);
else if ((number % start) == 0)
return (0);
else
return (check_prime(number, start - 1));
}
