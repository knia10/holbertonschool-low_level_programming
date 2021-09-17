#include "lists.h"
/**
 * print_dlistint - prints all the elements of a DLL.
 * @h: pointer to head list
 * Return: the number of nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		node += 1;
	}
	return (node);
}
