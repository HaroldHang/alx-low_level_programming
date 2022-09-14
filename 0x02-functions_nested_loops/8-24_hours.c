#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * jack_bauer - Print all hours
 *
 * Return: Always 0 (Success)
 */
void jack_bauer(void)
{
int i;
int n;
int j;
int k;
for (i = 0; i < 24; i++)
{
for(j = 0; j < 60; j++)
{
if (i < 10)
{
_putchar(48);
}
else if (i >= 10 && i < 20)
{
_putchar(49);
}
else
{
_putchar(50);
}
n = i % 10;
_putchar(n + 48);
_putchar(58);
k = j / 10;
n = j % 10;
_putchar(k + 48);
_putchar(n + 48);
_putchar(10);
}
}

}
