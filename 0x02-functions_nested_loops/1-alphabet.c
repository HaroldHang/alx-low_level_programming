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


int main(void)
{
/* your code goes there */
print_alphabet();
return (0);
}

void print_alphabet(void)
{
int i;
for (i = 97; i <123; i++)
{
_putchar(i);
}
_putchar(10);
}