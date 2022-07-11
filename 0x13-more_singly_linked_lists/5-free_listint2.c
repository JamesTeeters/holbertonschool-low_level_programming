#include "lists.h"
#include "4-free_listint.c"
/**
 * free_listint2 - A function that frees a list.
 * @head: first node.
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}
