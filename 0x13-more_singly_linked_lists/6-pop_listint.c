#include "lists.h"
#include <stdio.h>


/**
 * pop_listint - Pop the first element to the list
 * @head: The head of a linked list.
 * Return: Nothing
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    if (*head == NULL)
    {
        return (0);
    }
    int data;
    temp = *head;
    data = temp->n;
    (*head) = (*head)->next;
    free(temp);
    return (data);
}

