#include "lists.h"
/**
 **add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *@head: head pointer
 *@n: data of the node
 *Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (*head == NULL)
	{
		*head = new_node;
		(*head)->prev = NULL;
		return (new_node);
	}
	new_node->next = *head;
	(*head)->prev = new_node;
	new_node->prev = NULL;
	*head = new_node;

	return (*head);
}
