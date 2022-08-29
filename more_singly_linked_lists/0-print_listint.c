#include "lists.h"
/**
 *print_listint -  prints all the elements of a listint_t list
 *@h: pointer to the next node
 *Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t index;

	for (index = 0; h != NULL ; index++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (index);
}
