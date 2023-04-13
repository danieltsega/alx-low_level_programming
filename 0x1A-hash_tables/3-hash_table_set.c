#include "hash_tables.h"

/**
 * new_node - a function to create a node
 *
 * @key: a pointer to the key of item
 * @value: a pointer to the value of item
 *
 * Return: a new node
 */

hash_node_t* new_node(const char *key, const char *value)
{
	hash_node_t *node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);

	node->next = NULL;

	return (node);
}


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
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *node = new_node(key, value);
	hash_node_t *current_node = ht->array[index];

	if(key == NULL || value == NULL || ht == NULL)
	{
		return (0);
	}
	if(current_node == NULL)
	{
		ht->array[index] = node;
		return (1);
	}
	else
	{
		node->next = current_node;
		ht->array[index] = node;
		return (1);
	}		
	
}
