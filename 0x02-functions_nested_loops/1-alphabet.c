#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Print _putchar
 * Return: Always 0 (Success)
 */
void print_alphabet(void);

int main(void) 
{
/* your code goes there */
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar("\n");
}