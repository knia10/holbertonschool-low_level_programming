#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of DLL.
 * @head: pinter to head of list
 * @n: node.
 * Return: the address of the new element, or NULL if it failed.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p_new;

	if (head == NULL)
	{
		return (NULL);
	}
	p_new = malloc(sizeof(struct dlistint_s)); /*para crear nuevo nodo*/
	if (p_new)
	{
		p_new->n = n;
	}
	return (NULL);

	if (*head == NULL) /*cuenta la lista vacia*/
	{
		*head = p_new;
		p_new->next = NULL;
		p_new->prev = NULL;
		return (p_new);
	}
	p_new->next = *head; /*cuenta la lista normal*/
	p_new->prev = NULL;
	(*head)->prev = p_new;
	*head = p_new;
	return (p_new);
}
