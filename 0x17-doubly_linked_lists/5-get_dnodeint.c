#include "lists.h"
/**
* get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
* @head: pointer to the head of the list
* @index: index of the node to returned
* Return: node at index @index, or
* if the node does not exist, return NULL
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *cur_node = head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (cur_node)
	{
		if (i == index)
			return (cur_node);

		cur_node = cur_node->next;
		i++;
	}

	return (NULL);
}