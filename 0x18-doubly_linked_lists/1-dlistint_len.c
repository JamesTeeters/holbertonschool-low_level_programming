#include "lists.h"
/**
 * dlistint_len - function that prints contents of doubly linked list.
 * @h: input list.
 *
 * Return: number of nodes in list.
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->n)
		count++;
		h = h->next;
	}

	return (count);
}
