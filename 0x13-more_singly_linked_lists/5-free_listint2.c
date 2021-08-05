#include "lists.h"

/**
 *free_listint2 - function that frees a list
 *@head: list.
 */

void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
	{
		return;
	}

	while (*head != NULL)
	{
		p = *head;
		*head = p->next;
		free(p);
	}
}
