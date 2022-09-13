#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_sign - check the sign of the input
 *@n: the character to be checked
 * Return: Always 0 (Success)
 */
int print_sign(int n)
{
if (n < 0)
{
_putchar('-');
return (-1);
}
else if (n == 0)
{
_putchar('0');
return (0);
} else
{
_putchar('+');
return (1);
}
return (0);
}
