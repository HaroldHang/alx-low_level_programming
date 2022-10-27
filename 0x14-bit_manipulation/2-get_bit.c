#include "main.h"

/**
 * get_bit - Print binary number
 * @n: The number
 * @index: The index of bit
 * Return: the bit at position
 */
int get_bit(unsigned long int n, unsigned int index)
{   
    unsigned int max = 32768; 
    unsigned int pos = 15;
	
	while (max)
	{
        
        if (pos == index)
        {
            if ((n & max) != 0)
            {
                return (1);
            }
            else
            {
                return (0);
            }
        }
        else
        {
            pos--;
        }
        
        max >>= 1;
	}
}

