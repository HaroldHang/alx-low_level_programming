#include "main.h"
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
if (i > 9)
{
k = i / 10;
m = i % 10;
_putchar(k + '0');
_putchar(m + '0');
}
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
return (0);
}
