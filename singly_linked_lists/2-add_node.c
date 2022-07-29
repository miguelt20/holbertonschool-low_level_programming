#include "lists.h"
/**
 **add_node - adds a new node at the beginning of a list_t list
 *@head: head that's gonna be replaced
 *@str: the string that receives the new node
 *Return: the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t *)malloc(sizeof(list_t));

	new_node->str = strdup(str);

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
