#include <stdio.h>
#include <string.h>
/**
 * puts2 - Print every odd string
 *@str: the string to be reversed
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
int i;
i = 0;
while (str[i] != '\0')
{
if ((i % 2) == 0)
{
putchar(str[i]);
}
i++;
}
putchar('\n');
}
