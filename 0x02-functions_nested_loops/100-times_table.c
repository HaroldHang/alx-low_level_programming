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
int k;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
k = i * j;
if (j == 0)
{
printf("%i,", k);
}
else if (j == n)
{
if (k >= 100)
{
printf(" %i", k);
}
else if (k >= 10)
{
printf("  %i", k);
}
else
{
printf("   %i", k);
}
}
else
{
if (k >= 100)
{
printf(" %i,", k);
}
else if (k >= 10)
{
printf("  %i,", k);
}
else
{
printf("   %i,", k);
}
}
}
printf("\n");
}
}
}
