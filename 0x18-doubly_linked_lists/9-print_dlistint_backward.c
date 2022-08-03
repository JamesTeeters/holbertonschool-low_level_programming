#include "lists.h"
/**
 * print_dlistint_backward - print data of list backwards.
 * @h: first node in list.
 *
 * Return: number of nodes.
 */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *tail;
	size_t count = 0;

	tail = h;
	while (tail->next != NULL)
		tail = tail->next;

	while (tail != NULL)
	{
		printf("%d\n", tail->n);
			tail = tail->prev;
			count++;
	}
	return (count);
}
