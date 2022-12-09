#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - Print a doubled linked list.
 * @h: The head of a doubled linked list.
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
    unsigned int count = 0;
	while(h)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }
    
    return (count);
}