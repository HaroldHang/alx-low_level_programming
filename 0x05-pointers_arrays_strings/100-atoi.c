#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - string to number
 *@s: the string to convert in number
 * Return: Always 0 (Success)
 */

int _atoi(char *s)
{
int sign = 1;
int num;
num = atoi(s);
if (num == 0) {
while (*s != '\0')
{
if (*s == '-')
{
sign = -1;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + *s - '0';
}
s++;
}
return (num);
}
else
{
return (num);
}
}
