#include <ctype.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isalpha - check if the given input is an alphabet
 *@c: the character to be checked
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if (c >= 'A' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
return (0);
}
