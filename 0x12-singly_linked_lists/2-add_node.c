#include "lists.h"
/**
 * add_node -  function that adds a new node at the beginning of a list.
 * @head: pointer to the pointer of the address of the first node.
 * @str: given input of each new node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	char *new_str = strdup(str);
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = new_str;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
