#include "main.h"

/**
 * binary_to_uint - A function that sum the list
 * @b: The binary char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{   
    unsigned int conv = 0;
    unsigned int len = 0;
    unsigned int bin = 1;
    if (b == NULL)
    {
        return (0);
    }
    while(b[len])
    {
        len++;
    }
    while (len)
    {
      if (b[len - 1] != '1' && b[len - 1] != '0')
      {
          return (0);
      }
      if (b[len - 1] == '1')
      {
          conv += 1 * bin;
      }
      bin *= 2;
      len--;
    }
    return (conv);
}

