#include "hash_tables.h"

/**
 * key_index - a function that returns the index
 *
 * @key: a pointer that points to the index
 * @size: the size of the table
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int a = hash_djb2(key);

	int index = a % size;

	return (index);

}
