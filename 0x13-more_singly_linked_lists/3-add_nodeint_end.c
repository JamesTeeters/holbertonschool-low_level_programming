#include "lists.h"
/**
 * add_nodeint_end - A function that adds a new node at the end of a list.
 * @head: first node.
 * @n: nodes to be added.
 *
 * Return: number of nodes.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	int new_int = n;
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = new_int;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return (new_node);
}
