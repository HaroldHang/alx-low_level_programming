#include <stdlib.h>
0;136;0c#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Print alphabet in lower and uppercase
 * Return: Always 0 (Success)
 */

int main(void)
{
int count  = 0x61;
char letter;
int i;
char line;
/* your code goes there */
for (i = 48 ; i < 58; i++)
{
putchar(i);
}
for (i = 0 ; i < 6; i++)
{
letter = count;
putchar(letter);
count++;
}
count = 0x0a;
line = count;
putchar(line);
return (0);
}
