#include <stdio.h>
#include <string.h>
/**
 * print_diagsum Locate a substring
 *@a: the square matric
 *@size: size of matrice
 * Return: Always 0 (Success)
 */
void print_diagsums(int *a, int size)
{
int i, posLeft, posRight, sumLeft, sumRight;
posLeft = 0;
posRight = size - 1;
sumLeft = 0;
sumRight = 0;
for (i = 0; i < size; i++)
{
sumLeft += a[posLeft][posLeft];
sumRight += a[posRight][posRight];
posLeft++;
posRight--;
}
printf("%d, %d", sumLeft, sumRight);
}
