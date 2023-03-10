#include "lists.h"
/**
 *dlistint_len - returns the number of elements in a linked dlistint_t list
 *@h: head pointer
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		h = h->next;
	}
	return (index);
}
