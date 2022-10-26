#include "lists.h"

/**
 * sum_listint - A function that sum the list
 * @head: A pointer to listint_t structure
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}