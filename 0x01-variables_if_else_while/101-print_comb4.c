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
int l;
int m; 
/* your code goes there */
j = 49;
l = 50;
for (i = 48 ; i < 56; i++)
{
for (k = j; k < 57; k++)
{
for (m = l, m < 58; m++)
{
if (i >= 48 && k >= 49 && m > 50)
{
putchar(32);
}
putchar(i);
putchar(k);
putchar(m);
if (i < 55)
{
putchar(44);
}
}
l++;
}
j++;
}
putchar(0x0a);
return (0);
}
