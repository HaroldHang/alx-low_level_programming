/**
 * swap_int - Swap two variables
 *@a: the pointer to the first variable
 *@b: the pointer to the second variable
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
