#include "lists.h"
/**
 *
 *
 */
int sum_listint(listint_t *head)
{
	int i = 0;
	listint_t *tmp_node = head;
	
	while (tmp_node != NULL)
	{
		i += tmp_node->n;
		tmp_node = tmp_node->next;	
	}
	return (i);
}
