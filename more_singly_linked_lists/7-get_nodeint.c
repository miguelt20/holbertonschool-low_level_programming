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

	temp = head;

	for (index = 0; index < 5 ; index++)
	{
		head = head->next;
		temp = head;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
