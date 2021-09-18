#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a DLL.
 * @head: pointer to head of list.
 * @index: index of the node, starting from 0.
 * Return: pointer to node or NULL.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head) /*Valida si la lista esta vacia*/
	{
		return (NULL);
	}
	while (index && head->next)
	{
		head = head->next; /*desde atras hasta llegar al final de la lista*/
		index -= 1;
	}
	if (index == 0)
	{
		return (head);
	}
	else
	{
		return (NULL); /* porque el index esta fuera de rango*/
	}
}
