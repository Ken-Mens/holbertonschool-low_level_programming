#include "lists.h"
/**
 * add_node_end - function that adds node at end of list_t
 * @head: head of linked list
 * @str: str of list_t
 * Return: head of list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *foo, *temp;

	foo = malloc(sizeof(list_t));
	if (foo == NULL)
	{
		return (NULL);
	}
	foo->str = strdup(str);
	foo->len = _strlen(str);
	foo->next = NULL;
	if (*head == NULL)
		*head = foo;
		foo->next = NULL;
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = foo;
		foo->next = NULL;
	}
	return (*head);
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
