#include "main.h"

/**
 * set_bit - Set the bit
 * @n: The number
 * @index: The index of bit
 * Return: the bit at position
 */
int set_bit(unsigned long int *n, unsigned int index)
{   
    unsigned long int max = 0x01;
    max <<= index;
    if (max == 0)
    return (-1);
    *n = *n | max;
    return (1);
}

