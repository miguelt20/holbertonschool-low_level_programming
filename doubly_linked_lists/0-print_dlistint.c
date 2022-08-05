#include "lists.h"
/**
 *print_dlistint -  prints all the elements of a dlistint_t list
 *@h: head pointer
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t index;

	for (index = 0; h != NULL; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
