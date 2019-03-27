#include "lists.h"
/**
 * free_listint - function that frees a listint_t list
 * @head: head of linked list.
 * Return: Always 0.
 */
void free_listint(listint_t *head)
{
	listint_t *terminate;

	while (head)
	{
		terminate = head;
		head = head->next;
		free(terminate);
	}
}
