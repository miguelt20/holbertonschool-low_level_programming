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
	{
		new_node->next = *h;
        	(*h)->prev = new_node;
		new_node->prev = NULL;
		*h = new_node;
	}

	while (temp != NULL && idx != 1)
	{
		temp = temp->next;
		idx--;

		if (temp == NULL && idx != 1)
			return (NULL);
	}

	temp2 = temp->next;
	temp->next = new_node;
	temp2->prev = new_node;
	new_node->prev = temp;
	new_node->next = temp2;

	return (new_node);
}
