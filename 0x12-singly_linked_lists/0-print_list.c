#include "lists.h"
/**
 * print_list -  function that prints all the elements of a list
 * @h: input list
 *
 * Return: number of elements in list.
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		count++;

	}
	return (count);
}
