#include <stdio.h>
/**
 *_print_rev_recursion - print a string
 *@s: the string to print
 * Return: Always 0 (Success)
 */
void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
putchar(s);
}
}
