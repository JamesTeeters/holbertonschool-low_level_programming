#include "main.h"
/**
 * pop_listint - remove head node.
 * @head: first node in list.
 *
 * Return: data of deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t node; /*node to be deleted*/
	int data; /*data to be returned*/

	if (*head == NULL)
		return (0);
	node = *head; /*set node to head node*/
	data = *node->data; /*store data from node*/
	*head = node->next; /*move the haed to the next node*/
	free(node); /*delete node*/

	return (data);

}
