#include "hash_tables.h"
/**
 **hash_table_get - function that retrieves a value associated with a key
 *@ht: hash table
 *@key: key
 *Return: the value, or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char const *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strncmp(tmp->key, key, ht->size) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}

	return (NULL);
}
