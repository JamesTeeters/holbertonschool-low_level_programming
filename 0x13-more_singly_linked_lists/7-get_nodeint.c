#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list.
 * @head: first node.
 * @index: node to be grabed.
 *
 * Return: the nth node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head; /* node to be grabbed */
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);
	}

	return (node);
}
