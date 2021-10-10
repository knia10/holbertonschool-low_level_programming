#include "hash_tables.h"
/**
 * *hash_table_create - function that creates a hash table.
 * @size: is the size of the array
 * Return:  a pointer to the newly created hash table,
 * or NULL If something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hs_table;
	hash_node_t **array;
	unsigned long int idx = 0;

	if (size == 0)
	{
		return (NULL);/*si no tiene tamaño*/
	}

	hs_table = malloc(sizeof(hash_table_t));/*malloc con el size de struct*/
	if (!hs_table)/*si el puntero no existe*/
	{
		return (NULL);
	}
	/*memoria para el puntero al array con size*/
	array = malloc(sizeof(*array) * size);
	if (!array)
	{
		free(hs_table);
		return (NULL);
	}
	while (idx < size)
	{
		array[idx] = NULL;
		idx++;
	}
	hs_table->size = size;
	hs_table->array = array;
	return (hs_table);
}
