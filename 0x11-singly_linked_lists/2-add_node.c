#include "lists.h"
/**
 * add_node - adds node at beginning of a list_t list
 * @head: stands for head of our linked list.
 * @str: stands for our string in list_t.
 * Return: address of new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *Anode;

	Anode = malloc(sizeof(list_t));
		if (Anode == NULL)
			return (NULL);
	Anode->str = strdup(str);
	Anode->len = strlen(str);
	Anode->next = *head;
	*head = Anode;
	return (Anode);
}
