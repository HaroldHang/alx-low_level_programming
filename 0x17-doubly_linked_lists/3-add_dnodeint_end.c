#include "lists.h"

/**
 * add_dnodeint_end - Print the number of elements.
 * @h: The head of a doubled linked list.
 * @n: value n of the new node to be added to the list
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
    dlistint_t *new_end, *temp;
    new_end = malloc(sizeof(dlistint_t));
    if (new_end == NULL)
    {
        return (NULL);
    }
    new_end->n = n;
    new_end->next = NULL;
    if (*head == NULL) {
        *head = new_end;
        new_end->prev = NULL;
        return (new_end);
    } else {
        temp = *head;
        while (temp)
        {
            if (temp->next == NULL) {
                new_end->prev = temp;
            } else {
                temp = temp->next;
            }
        }
        
        return (new_end);
    }
}