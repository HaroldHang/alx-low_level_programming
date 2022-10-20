#include "lists.h"
#include <stdio.h>

/**
 * print_list - Print a linked list.
 * @h: The head of a linked list.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	while(h != NULL)
    {
        printf("[%d] %s\n", h->len, h->str);
        h = h->next;
        if (h == NULL)
        {
            printf("[0] (nil)");
        }
    }
    
}
