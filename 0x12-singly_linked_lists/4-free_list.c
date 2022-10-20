#include "lists.h"
#include <stdio.h>


/**
 * add_node_end - Add a note to the list
 * @head: The head of a linked list.
 * Return: Nothing
 */

void free_list(list_t *head)
{
    if (head == NULL)
    {
        free(head);
        return;
    }
    while (head->next != NULL)
    {
        free(head->str);
        free_list(head->next);
    }
    free(head);
}
