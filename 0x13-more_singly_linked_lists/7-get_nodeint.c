#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to linked list.
 *@index: nth.
 *Return: NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int acount = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while ((acount < index) && head != NULL)
	{
		head = head->next;
		acount++;
	}

	if (acount == index)
	{
		return (head);
	}
	return (NULL);
}
