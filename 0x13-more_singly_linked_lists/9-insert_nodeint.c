#include "lists.h"

/**
 *insert_nodeint_at_index - insert a new node at a given position.
 *@head: pointer to pointer.
 *@idx: index to insert new node.
 *@n: data.
 *Return: adress of new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int acount = 0;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp = *head;

	while (acount < (idx - 1))
	{
		temp = temp->next;
		acount++;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
