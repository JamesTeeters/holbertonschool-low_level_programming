#include "lists.h"
/**
 * sum_listint - sum of all data in list.
 * @head: first node in list.
 *
 * Return: sum.
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tmp_node = head;

	while (tmp_node != NULL)
	{
		i += tmp_node->n;
		tmp_node = tmp_node->next;
	}
	return (i);
}
