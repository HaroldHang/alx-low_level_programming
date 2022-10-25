#include "lists.h"
#include <stdio.h>


/**
 * add_node_end - Add a note to the list
 * @head: The head of a linked list.
 * Return: Nothing
 */

void free_listint(listint_t *head)
{
    listint_t *temp;
    if (head == NULL)
    {
        return;
    }
    while (head->next != NULL)
    {
        temp = head->next;
        free(head->n);
        free(head);
        free_list(temp);
    }
    free(head);
}

