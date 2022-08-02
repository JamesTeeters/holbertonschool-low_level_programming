#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node of list
 * @head: first node of list.
 * @index: nth node of list.
 *
 * Return: nth node or NULL id=f node doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int i = 0;

	node = head;
	if (node == NULL)
		return (NULL);

	while (node->next != NULL)
	{
		if (i == index)
			return (node);
		node = node->next;
		i++;
	}

	return (NULL);

}
