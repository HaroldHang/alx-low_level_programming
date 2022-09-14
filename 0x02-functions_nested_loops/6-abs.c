#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _abs - absolute value
 *@n: the character to be checked
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
if (n < 0)
{
n = n * (-1);
return (n);
}
else
{
return (n);
}
return (0);
}
