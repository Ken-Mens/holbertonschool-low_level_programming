#include "lists.h"
/**
 * sum_listint - returns sum of all the data of a listint_t
 * @head: head of linked list
 * Return: the sum of all of data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *foo = head;

	if (foo == NULL)
	{
		return (0);
	}
	while (foo != NULL)
	{
		sum += foo->n;
		foo = foo->next;
	}
	return (sum);
}
