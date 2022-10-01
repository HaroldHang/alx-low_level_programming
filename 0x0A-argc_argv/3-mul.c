#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the multiplication
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the argument
 *
 * Return: Always 0
 */
int main (int argc, char *argv[])
{
int argCount = argc - 1;
if (argCount != 2)
{
printf("Error\n");
return (1);
}
int mul;
mul = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mul);
return (0);
}