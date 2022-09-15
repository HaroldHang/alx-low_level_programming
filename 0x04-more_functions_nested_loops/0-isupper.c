#include <ctype.h>
#include "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * _isupper - check if the given input is uppercase
 *@c: the character to be checked
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
        if (isupper(c) == 0)
        {
                return (0);
        }
        else if (isupper(c) > 0)
        {
                return (1);
        }
        return (0);
}
