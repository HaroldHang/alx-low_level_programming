#include "lists.h"
#include <stdio.h>


/**
 * free_listint2 - Add a note to the list
 * @head: The head of a linked list.
 * Return: Nothing
 */

void free_listint2(listint_t **head)
{
    listint_t *temp;
    if (*head == NULL)
    {
        return;
    }
    while (*head)
    {
        temp = *head;
        (*head) = (*head)->next;
        free(temp);
    }
    *head = NULL;
}

