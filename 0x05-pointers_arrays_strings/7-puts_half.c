#include <stdio.h>
#include <string.h>
/**
 * puts_half - Print half of string
 *@str: the string to be half
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
int count = strlen(str) - 1;
int i;
if ((count % 2) == 0)
i = (count / 2) + 1;
else
i = ((count - 1) / 2) + 1;
for (; i <= count; i++)
{
putchar(str[i]);
}
putchar('\n');
}
