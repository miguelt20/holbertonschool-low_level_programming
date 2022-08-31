#include "hash_tables.h"
/**
 *hash_table_set - function that adds an element to the hash table
 *@ht: hash table
 *@key: key
 *@value: it's the value associated with the key
 *Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *newnode = NULL;
	hash_node_t *str = NULL;

	if (!ht || !key)
		return (0);

	newnode = malloc(sizeof(hash_node_t));
	if (!newnode)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);

	str = (hash_node_t *)ht->array[index];

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	if (key != (const char *)str)
		newnode->next = ht->array[index];

	ht->array[index] = newnode;

	return (1);
}
