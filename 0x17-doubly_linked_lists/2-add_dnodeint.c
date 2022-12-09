#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - Print the number of elements.
 * @h: The head of a doubled linked list.
 * Return: the number of nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
    dlistint_t *new_head;
    new_head = malloc(sizeof(dlistint_t));
    if (new_head == NULL)
    {
        return (NULL);
    }
    new_head->n = n;
    new_head->next = *head;
    *head = new_head;
    return (new_head);
}