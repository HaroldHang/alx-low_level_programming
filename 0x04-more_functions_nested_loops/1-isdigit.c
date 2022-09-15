#include <ctype.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isdigit - check if the given input is digit
 *@c: the character to be checked
 * Return: Always 0 (Success)
 */
int _isdigit(int c)
{
if (isdigit(c) == 0)
{
return (0);
}
else if (isdigit(c) > 0)
{
return (1);
}
return (0);
}
