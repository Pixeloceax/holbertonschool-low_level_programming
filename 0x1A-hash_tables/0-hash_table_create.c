#include "hash_tables.h"
/**
 *hash_table_create - comment
 *@size: V
 *Return: hash_table_t*
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash = malloc(sizeof(hash_table_t) * size);

	if (size == 0)
	{
		return (NULL);
	}
	if (hash == NULL)
	{
		return (NULL);
	}
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
	{
		free(hash);
		return (NULL);
	}
	return (hash);
}
