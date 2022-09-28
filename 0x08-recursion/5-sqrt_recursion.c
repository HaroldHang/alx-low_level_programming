#include <stdio.h>
#include <math.h>
int _sqrt(int num, int checker);
/**
 *_sqrt_recursion - square root
 *@n: the number
 * Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
else
return (_sqrt(n, 1));
}

/**
 *_sqrt - performs square root
 *@num: the number to check square
 *@checker: the start number
 * Return: Always 0 (Success)
 */
int _sqrt(int num, int checker)
{
int numEqual = checker * checker;
if (numEqual > num)
return (-1);
else if (numEqual < num)
return (_sqrt(num, checker + 1));
else
return (checker);
}
