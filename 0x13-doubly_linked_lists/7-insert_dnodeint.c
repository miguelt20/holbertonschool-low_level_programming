#include "lists.h"
/**
 **insert_dnodeint_at_index - inserts a new node at a given position
 *@h: head pointer
 *@idx: index of the list where the new node should be added
 *@n: data of the node
 *Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *temp;
	dlistint_t *temp2;

	temp = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*h == NULL)
	{
		*h = new_node;
		return (new_node);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		temp = temp->next;
		idx--;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->next = temp2;
	new_node->prev = temp;
	return (new_node);
}
