#include "hash_tables.h"
/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: the hash table.
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *next, *node;
	unsigned long int idx;

	if (!ht)/*verifica si existe*/
	{
		return;
	}
	if (!(ht->array))/*que contenga un array*/
	{
		free(ht);
		return;
	}
	idx = 0;
	while (idx < ht->size)/*idx menor al tamaño de t.hash*/
	{
		node = ((ht->array)[idx]);/*un nodo para el idx del array*/
		while (node)/*exista*/
		{
			next = node->next;
			if (node->key)/*si nodo esta en key*/
			{
				free(node->key);
			}
			if (node->value)/*si nodo esta en value*/
			{
				free(node->value);
			}
			node->key = NULL;/*que quede vacio*/
			node->value = NULL;
			free(node);/*ahora si lebra nodo*/
			node = next;/*lo pasa al sgte*/
		}
		idx++;/*para recorrer toda la ht*/
	}
	free(ht->array);/*libera el array en t.hash*/
	free(ht);/*libera t.hash*/
}
