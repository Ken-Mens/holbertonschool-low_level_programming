#include "sort.h"
/**
 * insertion_sort_list - sorts an of integers using the insertion sorting
 * @list: listint_t struct
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *curr;
	listint_t *alpha, *beta;
	listint_t *temp1, *temp2;

	if (list == NULL || (*list) == NULL || (*list)->next == NULL)
		return;

	curr = (*list)->next;
	while (curr)
	{
		beta = curr;
		alpha = curr->prev;

		while (alpha && beta->n < alpha->n)
		{
			temp1 = alpha->prev;
			temp2 = beta->next;

			if (alpha->prev)
			{
				temp1->next = beta;
			}
			else
				*list = beta;

			if (beta->next)
			{
				temp2->prev = alpha;
			}
			beta->prev = temp1;
			beta->next = alpha;
			alpha->prev = beta;
			alpha->next = temp2;
			alpha = beta->prev;
			print_list(*list);
		}
		curr = curr->next;
	}
}
