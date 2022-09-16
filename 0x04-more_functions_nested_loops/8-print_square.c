#include "main.h"
/**
 * print_square - print a square in terminal
 * @n: Numbers of times
 * Return: Always 0 (Success)
 */
void print_square(int n)
{
int i, j;
if (n > 0)
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
if (i == 0 || i == (n - 1))
{
_putchar('#');  
}
else
{
if (j > 0 && j < (n - 1))
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
else
{
_putchar('\n');
}
}
