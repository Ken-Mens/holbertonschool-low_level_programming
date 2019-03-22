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
	Anode->len = _strlen(str);
	Anode->next = *head;
	*head = Anode;
	return (Anode);
}
/**
 * _strlen - returns length of a string
 * @s: the string to return
 * Return: lenghth.
 */
int _strlen(const char *s)
{
	int x = 0;

	while (*(s + x) != '\0')
	{
		x++;
	}
	return (x);
}
