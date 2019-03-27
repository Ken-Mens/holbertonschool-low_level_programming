#include "lists.h"
/**
 * insert_nodeint_at_index - check the code for Holberton School students.
 * @head: head of linked list.
 * @idx: unsigned integer to be interpreted through.
 * @n: integer n.
 * Return: Address of new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *cur = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = cur;
		*head = new;
	}
	for (idx = 0; idx > 1; idx--)
	{
		cur = cur->next;
		if (!cur)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = cur->next;
	cur->next = new;
	return (new);
}
