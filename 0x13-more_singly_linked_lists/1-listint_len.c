#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Count the number of elements of the list.
 * @h: The head of a linked list.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h);
{
    size_t count = 0;
	while(h)
    {
        count++;
        h = h->next;
    }
    
    return (count);
}

