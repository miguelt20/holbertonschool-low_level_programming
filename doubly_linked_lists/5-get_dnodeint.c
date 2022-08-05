#include "lists.h"
/**
 **get_dnodeint_at_index -  returns the nth node of a dlistint_t linked list
 *@head: head pointer
 *@index: it's the index of the node, starting from 0
 *Return: returns the nth node of a dlistint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int snd_index;
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);

	if (index == 0)
		return (head);

	for (snd_index = 0; snd_index < index; snd_index++)
	{
		head = head->next;
		temp = head;
		if (temp == NULL && index > snd_index)
			return (NULL);
	}

	return (temp);
}
