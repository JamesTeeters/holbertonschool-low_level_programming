#include "lists.h"
/**
 * free_dlistint - free a doubly linked list.
 * @head: first node in list.
 *
 * Return: Nothing.
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
