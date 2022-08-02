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
	unsigned int i = 0;

	if (head == NULL)
		return(NULL);

	while (head->next != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}

	return (NULL);

}
