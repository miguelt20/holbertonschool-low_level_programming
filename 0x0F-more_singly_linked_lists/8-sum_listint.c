#include "lists.h"
/**
 *sum_listint -  returns the sum of all the data (n) of a listint_t linked list
 *@head: head pointer
 *Return: the sum of the list
 */
int sum_listint(listint_t *head)
{
	unsigned int index;
	int sum;

	sum = 0;

	for (index = 0; head != NULL; index++)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
