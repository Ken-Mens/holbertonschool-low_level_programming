#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: head of linked list
 * @index: index to traverse through.
 * Return: 1 on success, -1 if fails.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *foo = *head, *temp = *head;
	unsigned int x = 0;

	if (*head == NULL)
		return (-1);
	while (temp)
	{
		if (index == 0)
		{
			(*head) = foo->next;
			free(foo);
			return (1);
		}
		temp = temp->next;
		x++;
	}
	return (-1);
}
