#include "hash_tables.h"
/**
 * hash_table_print - function that prints a hash table.
 * @ht: the hash table.
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int idx;
	char *separator = "";

	if (!ht)/*verifica si existe*/
	{
		return;
	}
	if (ht->array == NULL)/*verifica si existe*/
	{
		return;
	}
	putchar(123);/*{*/

	idx = 0;
	while (idx < ht->size)/*idx menor al tamaño de t.hash*/
	{
		node = ((ht->array)[idx]); /*un nodo para el idx del array*/
		while (node)
		{
			/*imprime el separador,le key y value como un dic*/
			printf("%s'%s': '%s'", separator, node->key, node->value);
			separator = ", ";
			node = node->next;/*nodo pasa el sgte*/
		}
		idx++;
	}
	putchar(125);/*}*/
}
