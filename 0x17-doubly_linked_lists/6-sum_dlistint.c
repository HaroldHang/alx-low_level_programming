#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data (n) of
* a dlistint_t linked list
* @head: pointer to the head of the list
* Return: sum or 0, if the list is empty
*/

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *cur_node = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (cur_node)
	{
		sum += cur_node->n;
		cur_node = cur_node->next;
	}

	return (sum);
}