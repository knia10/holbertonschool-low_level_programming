#include "lists.h"

/**
 *_strlen - string length.
 *@str: string.
 *Return: length.
 */

int _strlen(cons char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node - function that adds a new node.
 *@head: linked list.
 *@str: date new node.
 *Return: address elemt or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node_add;

	if (str == NULL)
	{
		return (NULL);
	}

	node_add = malloc(sizeof(list_t));

	if (node_add == NULL)
	{
		return (NULL);
	}

	node_add->len = _strlen(str);

	if (head == NULL)
	{
		node_add->next = NULL;
	}
	else
	{
		node_add->next = *head;
	}
	*head = node_add;
	return (node_add);
}
