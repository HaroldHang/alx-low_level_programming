#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * more_numbers - print the numbers from 0 to 14 ten times
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
int i, k, m, j;
for (j = 0; j < 10; j++)
{
for (i = 0; i <= 14; i++)
{
k = i / 10;
m = i % 10;
if (i > 9)
{
_putchar(k + 48);
_putchar(m + 48);
}
else
{
_putchar(i + 48);
}
}
_putchar('\n');
}
}
