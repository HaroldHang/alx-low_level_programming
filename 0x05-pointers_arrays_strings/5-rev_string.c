#include <stdio.h>
#include <string.h>
/**
 * rev_string - reverse a string
 *@s: the string to be reversed
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
char temp;
int count = strlen(s);
int i;
count--;
for (i = 0; i < count; i++)
{
temp = s[count];
s[count] = s[i];
s[i] = temp;
count--;
}
}
