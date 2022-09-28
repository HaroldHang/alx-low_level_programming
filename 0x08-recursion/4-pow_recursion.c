#include <stdio.h>
#include <math.h>
/**
 *_pow_recursion - power of x by y
 *@x: the first number
 *@y: the second number
 * Return: Always 0 (Success)
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
else
return pow(x, y);
}
