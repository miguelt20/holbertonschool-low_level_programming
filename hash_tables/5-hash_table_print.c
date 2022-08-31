#include "hash_tables.h"
/**
 *hash_table_print - it prints a hash table
 *@ht: hash table
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *element;
	int count = 0;

	printf("{");
	for (index = 0; ht && index < ht->size; index++)
	{
		element = ht->array[index];
		while (element)
		{
			count++;
			printf("'%s': '%s'", element->key, element->value);
			if (count < 7)
				printf(", ");
			element = element->next;
		}
	}
	printf("}");
	printf("\n");
}
