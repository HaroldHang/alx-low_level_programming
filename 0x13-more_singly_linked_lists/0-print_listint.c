#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Print a linked list.
 * @h: The head of a linked list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h);
{
    unsigned int n = 0;
	while(h)
    {
        
        printf("%d\n", h->n);
        n++;
        h = h->next;
    }
    
    return (n);
}
