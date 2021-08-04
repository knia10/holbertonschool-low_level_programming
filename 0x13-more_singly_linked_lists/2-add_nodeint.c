#include "lists.h"

/**
 * add_nodeint -function that adds a new node.
 *@head: pointer to pointer.
 *@n: integer.
 *Return:address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));/*memory by new node*/

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n; /*give values*/

	new_node->next = *head;/*pasa al siguiente nodo*/
	*head = new_node;/*el puntero de la lista apunta al nodo nuevo*/
	return (new_node);
}
