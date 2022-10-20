#include "lists.h"
#include <stdio.h>


/**
 * add_node_end - Add a note to the list
 * @head: The head of a linked list.
 * Return: Nothing
 */

void free_list(list_t *head)
{
    list_t *temp;
    if (head == NULL)
    {
        return;
    }
    while (head->next != NULL)
    {
        temp = head->next;
        free(head->str);
        free(head);
        free_list(temp);
    }
    free(head);
}
