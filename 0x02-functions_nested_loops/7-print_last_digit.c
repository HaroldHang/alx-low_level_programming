#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_last_digit - Print the last digit of the integer
 *@n: the integer to be checked
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = -(n);
}
_putchar(n + 48);
return (n);
return (0);
}
