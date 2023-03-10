#include "lists.h"
/**
 *delete_nodeint_at_index - function that deletes the node at a position
 *@head: head pointer
 *@index: position of the node that should be deleted
 *Return: 1 if it succeeded or -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev_node;
	listint_t *temp;
	unsigned int snd_index;

	temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}

	for (snd_index = 0; snd_index < index && temp != NULL; snd_index++)
	{
		prev_node = temp;
		temp = temp->next;
	}

	if (index > snd_index && temp == NULL)
		return (-1);

	prev_node->next = temp->next;
	free(temp);

	return (1);
}
