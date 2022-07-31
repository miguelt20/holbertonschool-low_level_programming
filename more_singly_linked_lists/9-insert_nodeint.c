#include "lists.h"
/**
 **insert_nodeint_at_index - inserts a new node at a given position
 *@head: head pointer
 *@idx: position where new node should be added
 *@n: data of the node
 *Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *prev_node;
	listint_t *temp;
	unsigned int snd_index;

	temp = *head;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	for (snd_index = 0; snd_index < idx; snd_index++)
	{
		if (temp->next != NULL)
		{
			prev_node = temp;
			temp = temp->next;
		}

		if (temp->next == NULL && temp == NULL)
			return (NULL);
	}

	new_node->next = temp;
	prev_node->next = new_node;

	return (new_node);
}
