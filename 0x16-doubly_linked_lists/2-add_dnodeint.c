#include "lists.h"
/**
 * add_dnodeint - adds node at beginning of a list_t list
 * @head: stands for head of our linked list.
 * @n: stands for our string in dlistint_t.
 * Return: address of new element.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *Anode = malloc(sizeof(dlistint_t));

		if (Anode == NULL)
			return (NULL);
	Anode->n = n;
	Anode->next = (*head);
	Anode->prev = NULL;
	if (*head)
		(*head)->prev = Anode;
	(*head) = Anode;
	return (Anode);
}
