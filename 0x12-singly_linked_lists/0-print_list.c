#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print a linked list.
 * @h: The head of a linked list.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
    unsigned int n = 0;
	while(h)
    {
        if (h->str == NULL)
        {
            printf("[0] (nil)\n");
            continue;
        }
        printf("[%d] %s\n", h->len, h->str);
        n++;
        h = h->next;
    }
    
    return (n);
}
