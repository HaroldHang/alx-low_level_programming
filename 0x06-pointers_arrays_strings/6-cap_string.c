#include <stdio.h>
/**
 * cap_string - string capitalization
 *@s: string to capitalize
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
char *temp = s;
while (*s)
{
if (((*s == ' ') || (*s == '\t') || (*s == '\n') || (*s == ',') || (*s == ';') || (*s == '.') || (*s == '!') || (*s == '?') || (*s == '"') || (*s == '(') || (*s == ')') || (*s == '{') || (*s == '}')) && (*(s + 1) >= 'a' && *(s + 1) <= 'z'))
{
*(s + 1) = *(s + 1) - 32;
}
s++;
}
return (temp);
}

