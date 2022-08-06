#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index of a linked list
 *@head: head pointer
 *@index: it's the index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int s_index;
	dlistint_t *temp;
	dlistint_t *temp2;

	temp = *head;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
		{
			temp->next->prev = NULL;
		}
		free(temp);
		return (1);
	}
	for (s_index = 0; s_index < index && temp != NULL; s_index++)
	{
		temp2 = temp;
		temp = temp->next;
	}

	if (temp->next != NULL)
		temp->next->prev = temp->prev;

	if (index > s_index && temp == NULL)
		return (-1);

	temp2->next = temp->next;
	temp->next = temp->prev;
	free(temp);

	return (1);
}
