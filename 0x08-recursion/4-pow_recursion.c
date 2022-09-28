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
else if (y == 0)
return (1)
else if (y == 1)
return (x)
else
return ( x *= _pow_recursion(x, y -1 ));
}
