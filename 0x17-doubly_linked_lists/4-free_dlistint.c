#include "lists.h"
/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: pointer to head of list.
 */

void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head && head->next)
		{
			head = head->next;
			free(head->prev);
		}
		free(head);
	}
	else
		return;
}
