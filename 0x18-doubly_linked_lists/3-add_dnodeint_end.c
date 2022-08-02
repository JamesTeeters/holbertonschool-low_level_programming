#include "lists.h"
/**
 * add_dnodeint_end - add new node at end of list.
 * @head: first node in list.
 * @n: input data.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last;

	last = (*head);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if ((*head) == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
		return (new_node);
	}
	while (last->next != NULL)
		last = last->next;

	last->next = new_node;

	new_node->prev = last;

	return (new_node);

}
