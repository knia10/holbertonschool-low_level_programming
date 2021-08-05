#include "lists.h"

/**
 *pop_listint -  function that deletes the head node.
 *@head: list.
 *Return: deleted data.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n_data;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	n_data = temp->n;/*guarda el dato para retornar*/
	*head = temp->next;/*enlaza a head al nodo next*/
	free(temp);
	return (n_data);
}
