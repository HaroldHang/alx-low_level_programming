#include <ctype.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _islower - check if the given input is lowercase
 *@c: the character to be checked
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
if (islower(c) == 0)
{
return (0);
}
else if (islower(c) > 0)
{
return (1);
}
return (0);
}
