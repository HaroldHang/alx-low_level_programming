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
int i;
int k;
int l;
int t;
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i > n)
{
_putchar(32);
}
if (i < 0) {
_putchar(45);
k = -(i);
}
else
{
k = i;
}
if (k >= 100)
{
l = k / 10;
t = l % 10;
l = l / 10;
_putchar(l + 48);
_putchar(t + 48);
k = k % 10;
_putchar(k + 48);
}
else if (k >= 10)
{
l = k / 10;
_putchar(l + 48);
k = k % 10;
_putchar(k + 48);
}
else
{
_putchar(k + 48);
}
if (i < 98)
{
_putchar(44);
}
}
_putchar(10);
}
else
{
for(i = n; i >= 98; i--)
{
if(i < n)
{
_putchar(32);
}
if (i >= 100)
{
l = i / 10;
k = l % 10;
l = l / 10;
_putchar(l + 48);
_putchar(k + 48);
k = i % 10;
_putchar(k + 48);
} else if (i >= 10)
{
l = i / 10;
_putchar(l + 48);
k = i % 10;
_putchar(k + 48);
}
if (i > 98)
{
_putchar(44);
}
}
_putchar(10);
}
}
