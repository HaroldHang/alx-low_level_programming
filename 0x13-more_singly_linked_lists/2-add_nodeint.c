#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint - Add a note to the list
 * @head: The head of a linked list.
 * @n: The value of the node.
 * Return: the pointer to the new list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_head;
    new_head = malloc(sizeof(listint_t));
    if (new_head == NULL)
    {
        return (NULL);
    }
    new_head->n = n;
    new_head->next = *head;
    *head = new_head;
    return (new_head);
}
