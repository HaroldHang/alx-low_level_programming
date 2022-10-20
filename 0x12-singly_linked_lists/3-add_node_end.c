#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - Add a note to the list
 * @head: The head of a linked list.
 * @str: The value of the node.
 * Return: the pointer to the new list
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *tail;
    tail = malloc(sizeof(list_t));
    if (tail == NULL)
    {
        return (NULL);
    }
    tail->str = strdup(str);
    tail->len = strlen(str);
    tail->next = NULL;
    (*head).next = tail;
    return (tail);
}
