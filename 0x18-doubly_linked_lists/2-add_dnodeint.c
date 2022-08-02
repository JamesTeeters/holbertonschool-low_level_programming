#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the begining oflist.
 * @head: first node in list.
 * @n: input data.
 *
 * Return: address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;/*initilize new node*/

	newnode = malloc(sizeof(dlistint_t));/*allocate new node*/
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;/*store data in node*/

	/*set node position*/
	newnode->next = (*head);
	newnode->prev = NULL;

	/*changed head previous node*/
	if ((*head) != NULL)
		(*head)->prev = newnode;

	/*head points to newnode*/
	(*head) = newnode;

	return (newnode);
}
