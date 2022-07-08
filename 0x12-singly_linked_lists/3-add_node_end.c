#include "lists.h"
/**
 * add_node_end - a function that adds a new node at the end of a list.
 * @head: pointer that poits to the pointer of the address of the first node.
 * @str: input string for each node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *new_node;
	list_t *last_node;

	new_node = malloc(sizeof(list_t));
	last_node = malloc(sizeof(list_t));
	if (new_node == NULL || last_node == NULL)
		return (NULL);

	new_node->str = new_str;
	new_node->len = strlen(str);
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
