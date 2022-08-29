#include "lists.h"
/**
 **get_nodeint_at_index -  returns the nth node of a listint_t linked list
 *@head: head pointer
 *@index: the index of the node, starting at 0
 *Return: an specific node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	 unsigned int second_index;

	temp = head;

	for (second_index = 0; second_index < index; second_index++)
	{
		head = head->next;
		temp = head;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
