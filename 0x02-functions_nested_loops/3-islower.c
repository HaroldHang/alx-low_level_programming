#include <ctype.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
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
