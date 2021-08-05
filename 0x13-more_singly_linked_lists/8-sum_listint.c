#include "lists.h"

/**
 *sum_listint -  function that returns the sum of all the data (n).
 *@head: list
 *Return: add or 0 if the list is empty.
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
