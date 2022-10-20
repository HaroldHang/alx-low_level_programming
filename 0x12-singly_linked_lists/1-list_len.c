#include <stdio.h>

/**
 * list_len - Return the number of element
 * @h: The head of a linked list.
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
    unsigned int n = 0;
	while(h != NULL)
    {
        h = h->next;
        n++;
    }
    
    return (n);
}
