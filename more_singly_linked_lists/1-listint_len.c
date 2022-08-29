#include "lists.h"
/**
 *listint_len -  returns the number of elements in a linked listint_t list
 *@h: head pointer
 *Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
		h = h->next;

	return (index);
}
