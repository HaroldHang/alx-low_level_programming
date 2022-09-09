#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Print alphabet lowercase except q and e
 * Return: Always 0 (Success)
 */

int main(void)
{
int count  = 0x61;
char letter;
int i;
char line;
/* your code goes there */
for (i = 0 ; i < 26; i++)
{
letter = count;
if( i == 4 || i == 16)
{
count++;
continue;
}  
putchar(letter);
count++;
}
count = 0x0a;
line = count;
putchar(line);
return (0);
}
