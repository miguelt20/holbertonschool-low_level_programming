#include "hash_tables.h"
/**
 *hash_table_delete - it deletes a hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *tmp = NULL;
	hash_node_t *tmp2 = NULL;

	if (!ht)
		return;

	if (ht)
	{
		for (index = 0; index <= ht->size; index++)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				tmp2 = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = tmp2;
			}

		}
		free(ht->array);
		ht->array = NULL;
		free(ht);
	}
}
