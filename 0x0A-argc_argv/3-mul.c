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
int argCount;
argCount = argc - 1;
if (argCount != 2)
{
printf("Error\n");
return (1);
}
int prod;
int a = atoi(argv[1]);
int b = atoi(argv[2]);
prod = a * b;
printf("%d\n", prod);
return (0);
}