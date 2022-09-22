#include <stdio.h>
/**
 * string_toupper - string uppercase
 *@s: string to uppercase
 * Return: Always 0 (Success)
 */
char *string_toupper(char *s)
{
char *temp = s;
while (*s)
{
if (*s >= 'a' && *s <= 'z')
{
*s -= 32;
}
s++;
}
return (temp);
}

