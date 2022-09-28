#include <stdio.h>
/**
 *factorial - factorial of a number
 *@n: the number
 * Return: Always 0 (Success)
 */
int factorial(int n)
{
if (n == 1)
return (1);
else
return (n * factorial (n - 1));
}
