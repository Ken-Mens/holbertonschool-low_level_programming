#include "lists.h"
/**
* free_list - function that frees a list_t
* @head: pointer to head of list_t
* Return: Void.
*/
void free_list(list_t *head)
{
	list_t *terminate;

	while (head)
	{
		terminate = head;
		head = head->next;
		free(terminate->str);
		free(terminate);
	}
}
