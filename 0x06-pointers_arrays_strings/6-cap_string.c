#include <stdio.h>
int delemiters(char c);

/**
 * cap_string - string capitalization
 *@s: string to capitalize
 * Return: Always 0 (Success)
 */
char *cap_string(char *s)
{
char *temp = s;
if (*(s + 0) >= 'a' && *(s + 0) <= 'z' )
*(s + 0) = *(s + 0) - 32;
while (*s)
{
if ( delemiters(*s) && ((*(s + 1) >= 'a') && (*(s + 1) <= 'z')) )
{
*(s + 1) = *(s + 1) - 32;
}
s++;
}
return (temp);
}

/**
 * delemiters - Separators of words: space, tabulation, new line,
 * ,, ;, ., !, ?, ", (, ), {, and }
 * @c: an input character
 * Return: 1 if seperator, 0 otherwise
 */
int delemiters(char c)
{
int i;
char seperators[13] = { ' ', '\t', '\n', ',', ';', '.', '!', '?','"', '(', ')', '{', '}' };
for (i = 0; i < 13; i++)
{
if (c == seperators[i])
return (1);
}
return (0);
}
