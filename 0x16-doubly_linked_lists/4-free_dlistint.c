#include "lists.h"
/**
* free_dlistint - function that frees a list_t
* @head: pointer to head of list_t
* Return: Void.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *terminate;

	while (head)
	{
		terminate = head;
		head = head->next;
		free(terminate);
	}
}
