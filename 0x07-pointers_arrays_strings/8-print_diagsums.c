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
int i, j, posLeft, posRight, sumLeft, sumRight;
posLeft = 0;
posRight = 0;
sumLeft = 0;
sumRight = 0;
j = size * size;
for (i = 0; i < j; i++)
{
if ((i % size) == 0) {
sumLeft += a[i + posLeft];
posLeft++;
}
if (((i + 1 ) % size) == 0) {
sumRight += a[i - posRight];
posRight++;
}
}
printf("%d, %d\n", sumLeft, sumRight);
}
