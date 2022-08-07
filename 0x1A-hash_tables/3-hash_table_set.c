#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht:  hash table you want to add or update the key/value to.
 * @key: is the key.
 * @value:  the value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	tmp = new->next;

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
		tmp = tmp->next;
	}
	ht->array[index] = new;
	return (1);
}
