#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * binary_to_uint - A function that sum the list
 * @b: The binary char
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{   
    if (b == NULL)
    {
        return (0);
    }
	unsigned int conv = 0;

	int len;
    len = strlen(b);
    unsigned int bin = 1;
  //len--;

  //printf("%c", b[i]);
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

