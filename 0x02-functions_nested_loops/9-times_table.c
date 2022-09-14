#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * times_table - Print the 0 times tables
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
int i;
int n;
int j;
int k;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
if (j > 0)
{
_putchar(32);
if (n < 10)
{
_putchar(32);
}
}
if (n >= 10)
{
k = n / 10;
n = n % 10;
_putchar(k + 48);
_putchar(n + 48);
}
else
{
_putchar(n + 48);
}
if (j < 9)
{
_putchar(44);
}
}
_putchar(10);
}

}
