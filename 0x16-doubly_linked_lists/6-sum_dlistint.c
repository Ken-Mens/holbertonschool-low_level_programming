#include "lists.h"
/**
 * sum_dlistint - returns sum of all the data of a listint_t
 * @head: head of linked list
 * Return: the sum of all of data.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *foo = head;

	while (foo != NULL)
	{
		sum += foo->n;
		foo = foo->next;
	}
	return (sum);
}
