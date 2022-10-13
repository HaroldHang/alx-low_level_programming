#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * sum_them_all - sum all optional arguments
 * @n: the number of arguments
 * @...: Other parameters
 * Return: some of numnbers
 */
int sum_them_all(const unsigned int n, ...)
{
if (n == 0)
{
return (0);
}
unsigned int i = 0;
int sum = 0;
va_list ptr;
va_start(ptr, n);
for (; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
