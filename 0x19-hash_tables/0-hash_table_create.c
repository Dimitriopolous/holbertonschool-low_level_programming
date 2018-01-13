#include "hash_tables.h"
/**
 * hash_table_create - Makes a hash table
 * @size: Length of the array in hash table
 * Return: Pointer to new_table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned long int i;

	if (size < 1)
		return (NULL);

	if ((new_table = malloc(sizeof(hash_table_t))) == NULL)
		return (NULL);

	if ((new_table->array = malloc(sizeof(hash_node_t *) * size)) == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;

	new_table->size = size;

	return (new_table);
}