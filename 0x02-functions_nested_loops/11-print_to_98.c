#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_to_98 - Print to 98
 *@n: Where to print ftom
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
while (n != 98)
{
printf("%i, ", n);
if (n > 98)
{
n--;
}
else
{
n--;
}
}
printf("98\n");
}

