#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: head pointer
 *Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	if (head == NULL)
		return (0);

	*head = (*head)->next;
	return (0);
}
