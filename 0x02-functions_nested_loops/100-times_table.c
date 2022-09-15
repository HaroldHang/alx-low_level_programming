#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_times_table - Print the 0 times tables
 *@n: the table to ptint to
 * Return: Always 0 (Success)
 */
void print_times_table(int n)
{
int i, j, k, t, s;
if (n > 0 && n < 15)
{
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j > 0)
{
_putchar(32);
if (k < 10)
{
_putchar(32);
_putchar(32);
} else if (k >= 10 && < 100)
{
_putchar(32);
}
}
if (k >= 100)
{
t = k % 10;
s = t / 10;
_putchar(s + 48);
s = t % 10;
_putchar(s + 48);
t = k % 100;
_putchar(k + 48);
}
if (k >= 10)
{
t = k / 10;
_putchar(t + 48);
k = k % 10;
_putchar(t + 48);
}
else
{
_putchar(n + 48);
}
if (j < n)
{
_putchar(44);
}
}
printf("\n");
}
}
}
