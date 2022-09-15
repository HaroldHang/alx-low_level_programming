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
if (n < 0 || n > 15)
{
printf("\n");
}
else
{
int i;
int j;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
if (j == n)
{
printf("%i", i * j);
}
else
{
printf("%i, ", i * j);
}
}
printf("\n");
}
}
}
