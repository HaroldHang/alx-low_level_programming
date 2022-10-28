#include "main.h"

/**
 * get_bit - Print binary number
 * @n: The number
 * @index: The index of bit
 * Return: the bit at position
 */
int get_bit(unsigned long int n, unsigned int index)
{   
    unsigned int max = 0x01;
    max <<= index;
    if (max == 0)
    return (-1);
    if ((n & max) == 0)
    {
        return (0);
    }
    else
    {
        return (1);
    }
}

