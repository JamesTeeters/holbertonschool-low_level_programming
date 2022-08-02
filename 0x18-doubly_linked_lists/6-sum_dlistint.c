#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all data in list.
 * @head: first node in list.
 *
 * Return: sum of data or NULL if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *node;
	int sum = 0;

	node = head;
	if (node == NULL)
		return (0);

	while (node != NULL)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
