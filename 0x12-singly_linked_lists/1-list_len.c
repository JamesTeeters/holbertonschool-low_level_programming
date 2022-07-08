#include "lists.h"
/**
 * list_len - a function that returns the number of elements in a linkedlist.
 * @h: given list.
 *
 * Return: length of list.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}
	return (count);
}
