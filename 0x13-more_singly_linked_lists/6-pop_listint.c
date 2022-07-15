#include "main.h"
/**
 * pop_listint - remove head node.
 * @head: first node in list.
 *
 * Return: data of deleted node.
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp_node; /*node to be deleted*/
	int data; /*data to be returned*/

	if (*head == NULL)
		return (0);

	tmp_node = *head; /*set node to head node*/
	data = tmp_node->data; /*store data from node*/
	*head = tmp_node->next; /*move the haed to the next node*/
	free(tmp_node); /*delete node*/

	return (data);

}
