/**
 * print_array - Print half of string
 *@a: the array to pint
 *@n: the n elements
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
if (i == (n-1))
{
printf("%d", a[i]);
}
else
{
printf("%d, ", a[i]);
}
}
}

