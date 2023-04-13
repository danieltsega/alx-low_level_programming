#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an
 * element to the hash table
 *
 * @ht: a pointer to the table
 * @key: a pointer to the key of item
 * @value: a pointer to the value of item
 *
 * Return: 1 on succeed and 0 if not
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if(key == NULL || value == NULL || ht == NULL)
	{
		return (0);
	}

	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node;

	node = ht->array[index];
	while(node != NULL)
	{
		if(strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			return (1);
		}
		node = node->next;
	}
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	if(node->key == NULL || node->value == NULL)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
