#include "hash_tables.h"

/**
  * *hash_table_create - a function that creates table
  *
  * @size: the size of the table
  * Return: a hash table
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	
	hash_table_t *table = malloc(sizeof(hash_table_t));
	hash_node_t **array;
	
	array = malloc(sizeof(hash_node_t *) *size);
	
	if(array == NULL)
	{
		return(NULL);
	}
	
	if(table == NULL)
	{
		return(NULL);
	}

	table->size = size;
	table->array = array;

	return (table);

}
