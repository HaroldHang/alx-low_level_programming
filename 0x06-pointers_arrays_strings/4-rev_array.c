#include <stdio.h>
/**
 * reverse_array - array reverse
 *@a: array of elements
 *@n: number of element
 * Return: Always 0 (Success)
 */
void reverse_array(int *a, int n)
{
int count, temp, i, j;
if ((n % 2) == 0)
{
count = n / 2;
}
else
{
count = (n / 2) + 1;
}
j = n - 1;
for (i = 0; i < count; i++)
{
temp = a[i];
a[i] = a[j];
a[j] = temp;
j--;
}
}

