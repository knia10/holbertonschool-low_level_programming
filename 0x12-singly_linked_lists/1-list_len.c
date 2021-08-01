#include "lists.h"

/**
 * list_len - function that returns the number of elements.
 *@h: linked list.
 *Return: number elements.
 */

size_t list_len(const list_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
