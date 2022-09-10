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
/* your code goes there */
for (i = 48 ; i < 58; i++)
{
putchar(i);
if (i > 48)
{
putchar(32);
}
if (i < 57)
{
putchar(44);
}
}
return (0);
}
