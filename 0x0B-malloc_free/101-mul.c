#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the multiplication of positive numbers 
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments.
 *
 * Return: -1 if any number contains symbols that are non-digits, otherwise 0
 */
int main(int argc, char *argv[])
{
int num, i, mul = 0;
if ((argc - 1) != 2)
{
printf("Error\n");
exit(98);
}
for (num = 1; num < argc; num++)
{
for (i = 0; argv[num][i]; i++)
{
if (argv[num][i] < '0' || argv[num][i] > '9')
{
printf("Error\n");
exit(98);
}
}
mul *= atoi(argv[num]);
}
printf("%d\n", mul);
return (0);
}