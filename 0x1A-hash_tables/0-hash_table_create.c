#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table
 * @size: size of array.
 *
 * Return: A pointer to created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_table_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		(table->array)[i] = NULL;

	return (table);

}
