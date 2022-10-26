#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - Pop the first element to the list
 * @head: The head of a linked list.
 * Return: the value of head node
 */

int pop_listint(listint_t **head)
{
    listint_t *temp;
    if (*head == NULL)
    {
        return (0);
    }
    int data;
    data = (*head)->n;
    temp = (*head)->next;
    free(*head);
    *head = temp;
    return (data);
}

