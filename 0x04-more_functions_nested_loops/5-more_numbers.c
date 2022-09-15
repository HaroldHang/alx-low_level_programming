#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_most_numbers - print the numbers from 0 to 14 ten times
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int i, k, m, j;
for (j = 0; j <= 10; j++)
{
for (i = 0; i <= 14; i++)
{
k = i / 10;
m = i % 10;
if (k > 0)
{
_putchar(i + 48);
}
_putchar(i + 48);
}
_putchar('\n');
}
}
