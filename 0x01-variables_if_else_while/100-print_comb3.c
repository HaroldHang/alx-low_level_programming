#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Print digits numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
int i;
int j;
int k;
/* your code goes there */
j = 49;
for (i = 48 ; i < 57; i++)
{
for (k = j; k < 58; k++)
{
if (i >= 48 && k > 49)
{
putchar(32);
}
putchar(i);
putchar(k);
if (i < 56)
{
putchar(44);
}
}
j++;
}
putchar(0x0a);
return (0);
}
