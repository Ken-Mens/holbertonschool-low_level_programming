#include "lists.h"
/**
 * add_nodeint - function that adds a new node at beginning
 * @n: integer data
 * @head: head of singly linked list.
 * Return: new node as head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *Anode;

	Anode = malloc(sizeof(listint_t));
	if (Anode == NULL)
		return (NULL);
	Anode->n = n;
	Anode->next = *head;
	*head = Anode;
	return (Anode);
}
