#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data  of a DLL
 * @head: pointer to head of lists.
 * Return: add or 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	if (!head)
	{
		return (add);
	}

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
