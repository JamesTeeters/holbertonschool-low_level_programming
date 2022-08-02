#include "lists.h"
/**
 * print_dlistint - function that prints contents of doubly linked list.
 * @h: input list.
 *
 * Return: number of nodes in list.
 *
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (count);
}
