#include "lists.h"

/**
 *free_listint - function that frees a list.
 *@head: list.
 */

void free_listint(listint_t *head)
{
	listint_t *p;

	if (head == NULL)/*sil la lista esta vacia*/
	{
		return;
	}

	while (head != NULL)
	{
		p = head;
		head = head->next;/*pasa al sgte nodo*/
		free(p);
	}
}
