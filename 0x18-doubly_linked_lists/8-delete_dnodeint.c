#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node at index.
 * @head: first node of list.
 * @index: node to delete.
 *
 * Return: 1 if success, -1 if failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *node, *after, *before;


	if (head == NULL || (*head) == NULL)
		return (-1);

	node = (*head);

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
		(*head)->next->prev = NULL;
		(*head) = (*head)->next;
		}
		else
			(*head) = NULL;
		free(node);
		return (1);
	}

	while (i < index)
	{
		node = node->next;
		if (node == NULL)
			return (-1);

		i++;
	}
	if (node->next == NULL)
	{
		node->prev->next = NULL;
		free(node);
		return (1);
	}
	after = node->next;
	before = node->prev;
	before->next = after;
	after->prev = before;
	free(node);

	return (1);
}
