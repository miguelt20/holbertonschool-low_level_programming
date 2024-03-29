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

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
	{
		new_node->next = temp;
		*head = new_node;
		return (new_node);
	}
	for (snd_index = 0; snd_index < idx && temp != NULL; snd_index++)
	{
		prev_node = temp;
		temp = temp->next;
	}
	if (temp == NULL && idx > snd_index)
		return (NULL);

	new_node->next = temp;
	prev_node->next = new_node;

	return (new_node);
}
