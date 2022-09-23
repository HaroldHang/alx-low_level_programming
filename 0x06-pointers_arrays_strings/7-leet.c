#include <stdio.h>
/**
 * leet - mozart function
 *@s: string to transform
 * Return: Always 0 (Success)
 */
char *leet(char *s)
{
char *temp = s;
int i;
char letters[5] = {'A' , 'E', 'O', 'T', 'L'};
char numbers[5] = {'4' , '3', '0', '7', '1'};
while (*s)
{
for (i = 0; i < 5; i++) {
if ((*s == letters[i]) || (*s == (letters[i] + 32)))
*s = numbers[i];
}
s++;
}
return (temp);
}

