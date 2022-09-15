#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;
        /* Here is where the infinite loop begin */
        while (i < 10)
        {
                putchar(i);
        }
        /* And it is nerver end as i is not incremented */
        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
