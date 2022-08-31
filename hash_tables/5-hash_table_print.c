#include "hash_tables.h"
/**
 *hash_table_print - it prints a hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0, verifier = 0;
	hash_node_t *element;

	if (!ht)
		return;

	printf("{");
	for (index = 0; ht && index < ht->size; index++)
	{
		element = ht->array[index];
		while (element)
		{
			if (element->key != NULL && verifier == 1)
				printf(", ");
			printf("'%s': '%s'", element->key, element->value);
			element = element->next;
			verifier = 1;
		}
	}
	printf("}");
	printf("\n");
}
