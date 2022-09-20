#include <stdio.h>
#include <string.h>
/**
 * print_rev - reverse a string
 *@s: the string to be reversed
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
int count = strlen(s);
char rev[count];
int i, j;
j = 0;
i = count - 1;
while (i >= 0)
{
rev[j] = s[i];
i--;
j++;
}
rev[count] = '\0';
return (rev);
}