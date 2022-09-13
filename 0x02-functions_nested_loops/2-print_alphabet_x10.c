#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * print_alphabet_x10 - print 10 times the alphabet in lowercase
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
int i;
int j;
for (j = 0; j < 10; j++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
