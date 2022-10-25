#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_nodeint_end - Add a node to the list
 * @head: The head of a linked list.
 * @n: The value of the node.
 * Return: the pointer to the new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *tail, *temp;
    tail = malloc(sizeof(listint_t));
    if (tail == NULL)
    {
        return (NULL);
    }
    tail->n = n;
    tail->next = NULL;
    if (*head == NULL)
    {
      *head = tail;
    } else {
        temp = *head;
        while(temp)
        {
            if (temp->next == NULL)
            {
                temp->next = tail;
                break;
            }
            else
            {
                temp = temp->next;
            }
        }
        
    }
    return (tail);
}
