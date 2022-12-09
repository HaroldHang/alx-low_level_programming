#include "lists.h"

/**
 * dlistint_len - Print the number of elements.
 * @h: The head of a doubled linked list.
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
    unsigned int count = 0;
	while(h)
    {
        count++;
        h = h->next;
    }
    
    return (count);
}