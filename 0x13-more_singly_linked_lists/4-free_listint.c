#include "lists.h"
/**
 * free_listint - A function that frees a list.
 * @head: first node.
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
