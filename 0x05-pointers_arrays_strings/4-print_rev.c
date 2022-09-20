#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * print_rev - reverse a string
 *@s: the string to be reversed
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int count = strlen(s);
int i, j;
j = 0;
i = count - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
j++;
}
_putchar('\n');
}
