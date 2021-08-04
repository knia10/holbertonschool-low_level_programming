#include "lists.h"

/**
 *add_nodeint_end -  function that adds a new node at the end of list.
 *@head: pointer to pointer head.
 *@n: data to add.
 *Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));/*espacio para un nuevo nodo*/

	if (new_node == NULL)/*caso policia*/
	{
		return (NULL);
	}
	new_node->n = n;/*crea un nuevo nodo para el dato n*/
	new_node->next = NULL;/*el siguiente nodo sera nulo*/

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}
	temp->next = new_node;
	return (new_node);
}
