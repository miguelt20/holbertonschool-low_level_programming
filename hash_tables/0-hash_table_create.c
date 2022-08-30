#include "hash_tables.h"
/**
 **hash_table_create - creates a hash table
 *@size: it's the size of the array
 *Return:  pointer to the newly created hash table or NULL if fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_table;
	unsigned long int i;

	hs_table = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (!hs_table)
		return (NULL);

	hs_table->size = size;

	hs_table->array = malloc(sizeof(hash_node_t) * size);
	if (!hs_table->array)
	{
		free(hs_table);
		return (NULL);
	}

	for (i = 0; i < hs_table->size; i++)
		hs_table->array[i] = NULL;

	return (hs_table);
}
