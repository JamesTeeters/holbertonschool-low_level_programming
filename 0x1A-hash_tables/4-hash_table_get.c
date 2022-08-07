#include "hash_tables.h"
/**
 * hash_table_get - retrive value of stored with given key.
 * @ht: hash table.
 * @key: given key.
 *
 * Return:  value associated with the element,
 * or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;
	
	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp == NULL)
		return (NULL);

	if (tmp->next != NULL)
	{
		while (tmp != NULL)
		{
			if  (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
		return (NULL);
	}
	return (ht->array[index]->value);

}
