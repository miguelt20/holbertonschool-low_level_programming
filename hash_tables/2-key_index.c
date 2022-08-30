#include "hash_tables.h"
/**
 *key_index - function that gives a index of a key
 *@key: key
 *@size: size of the array of the hash table
 *Return: the index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int val = 0, index = 0;

	val = hash_djb2(key);
	index = val % size;

	return (index);
}
