#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key.
 * @key: the key
 * @size: size of the array of the hash table.
 * Return: index at which the key/value pair should be stored in the array.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (size == 0)
	{
		return (0);
	}
	idx = hash_djb2(key);/*funcion entrega el valor*/
	return (idx % size);/*para saber el idx*/
}
