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
	unsigned int s_idx = 0;
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
	while (temp != NULL && s_idx < idx)
	{
		temp = temp->next;
		s_idx++;

		if (temp == NULL && idx > s_idx)
			return (NULL);
	}
	if (temp->next == NULL)
	{
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
		return (new_node);
	}
	temp2 = temp->prev;
	temp->prev = new_node;
	temp2->next = new_node;
	new_node->next = temp;
	new_node->prev = temp2;
	return (new_node);
}
