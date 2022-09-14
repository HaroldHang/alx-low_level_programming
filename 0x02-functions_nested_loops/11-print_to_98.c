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
if (n <= 98)
{
for (i = n; i <= 98; i++)
{
if (i > n)
{
_putchar(32);
}
if (i < 0)
{
_putchar(45);
k = -(i);
}
else
{
k = i;
}
print_num(k);
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
print_num(i);
if (i > 98)
{
_putchar(44);
}
}
_putchar(10);
}
}

/**
 * print_num - Print num
 *@num: Where to print ftom
 * Return: Always 0 (Success)
 */

void print_num(int num)
{
int l;
int t;
if (num >= 100)
{
l = num / 10;
t = l % 10;
l = l / 10;
_putchar(l + 48);
_putchar(t + 48);
num = num % 10;
_putchar(num + 48);
}
else if (num >= 10)
{
l = num / 10;
_putchar(l + 48);
num = num % 10;
_putchar(k + 48);
}
else
{
_putchar(num + 48);
}
}