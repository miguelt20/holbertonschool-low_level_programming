#include "lists.h"
/**
 **add_node_end - adds a new node at the beginning of a list_t list
 *@head: head that's gonna be replaced
 *@str: the string that receives the new node
 *Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;
	unsigned int num_char;

	last_node = *head;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (num_char = 0; str[num_char]; num_char++)
		;

	new_node->len = num_char;
	new_node->str = strdup(str);

	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	return (new_node);
}
