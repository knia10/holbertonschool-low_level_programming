#include "lists.h"

/**
 * listint_len - function that returns the number of elements.
 *@h: linked list.
 *Return: number elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		nnodes++;
		h = h->next;
	}
	return (nnodes);
}
