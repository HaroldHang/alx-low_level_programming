#include "lists.h"
#include <stdio.h>


/**
 * free_listint - Add a note to the list
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
        temp = head;
        head = head->next;
        free(temp);
    }
    free(head);
}

