#include "lists.h"
/**
 * add_dnodeint_end -  function that adds a new node at the end
 * @head: pointer to head of list
 * @n: node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p_new, *end;

	if (head)
	{
		p_new = malloc(sizeof(struct dlistint_s));
	}
	else
		return (NULL);
	if (p_new)
	{
		p_new->n = n;
	}
	else
		return (NULL);
	if (*head == NULL)
	{
		*head = p_new;
		p_new->next = NULL;
		p_new->prev = NULL;
		return (p_new);
	}

	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	p_new->next = NULL;
	p_new->prev = end;
	end->next = p_new;
	return (p_new);
}