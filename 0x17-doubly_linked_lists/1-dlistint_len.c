#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked
 * @h: pointer to head list.
 * Return: number elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node += 1;
	}
	return (node);
}
