#include "lists.h"
/**
 * add_nodeint - A function that adds a new node at the beginning of a list.
 * @head: first node.
 * @n: node to add to the head.
 *
 * Return: number of nodes.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	int new_int = n;
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = new_int;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
