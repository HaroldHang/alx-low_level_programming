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
int sign, num, minus, plus;
sign = 1;
num = atoi(s);
if (num == 0)
{
while (*s != '\0')
{
if (*s == '-')
{
minus++;

}
else if (*s == '+')
{
plus++;
}
else if (*s >= '0' && *s <= '9')
{
num = (num * 10) + *s - '0';
}
else if (num > 0)
{
break;
}
if (minus > plus)
{
sign = - 1;
}
s++;
}
num = num * sign;
return (num);
}
else
{
return (num);
}
}
