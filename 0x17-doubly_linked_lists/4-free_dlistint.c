#include "lists.h"
/**
* free_dlistint - frees a dlistint_t list
* @head: pointer to head of the dlistint_t list to be freed
*/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *cur_node = head, *free_temp;

	if (!head)
		return;

	while (cur_node->next)
	{
		free_temp = cur_node;
		cur_node = cur_node->next;
		free(free_temp);
	}

	free(cur_node);
}