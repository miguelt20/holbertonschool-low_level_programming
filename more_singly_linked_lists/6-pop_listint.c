#include "lists.h"
/**
 *pop_listint - deletes the head node of a listint_t linked list
 *@head: head pointer
 *Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_data;

	if (*head == NULL)
		return (0);

	temp = *head;
	n_data = (*head)->n;
	*head = (*head)->next;
	free(temp);
	return (n_data);
}
