#include "lists.h"

/**
 *print_listint - function that prints all the elements of a listint_t list.
 *@h: create list.
 *Return: number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nnodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/*if int has no value, fill it with 0*/
		nnodes = nnodes + 1;
		h = h->next;/*advance the list*/
	}
	return (nnodes);
}
