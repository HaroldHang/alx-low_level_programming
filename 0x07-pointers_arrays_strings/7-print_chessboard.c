#include <stdio.h>
#include <string.h>
/**
 * _strstr Locate a substring
 *@a: board to print
 * Return: Always 0 (Success)
 */
void print_chessboard(char (*a)[8])
{
int i, j;
for (i = 0; i < 8; i++)
{
for (j = 0; i < 8; j++)
{
putchar(a[i][j]);
}
putchar('\n');
}
}
