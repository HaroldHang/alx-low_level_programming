#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node - Add a note to the list
 * @head: The head of a linked list.
 * @str: The value of the node.
 * Return: the pointer to the new list
 */
list_t *add_node(list_t **head, const char *str)
{
    list_t *new_head;
    new_head = malloc(sizeof(list_t));
    if (new_head == NULL)
    {
        return (NULL);
    }
    new_head->str = strdup(str);
    new_head->len = strlen(str);
    new_head->next = *head;
    *head = new_head;
    return (new_head);
}
