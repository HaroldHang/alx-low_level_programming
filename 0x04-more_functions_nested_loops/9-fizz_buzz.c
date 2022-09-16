#include <stdlib.h>
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Print fizz buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
int i, k, m;
/* your code goes there */
for (i = 1 ; i <= 100; i++)
{
k = i % 3;
m = i % 5;
if ((k == 0) && (m == 0))
{
printf("FizzBuzz");
}
else if (k == 0)
{
printf("Fizz");
}
else if (m == 0)
{
printf("Buzz");
}
else
{
printf("%i", i);
}
printf(" ");
}

return (0);
}
