#include "hash_tables.h"
/**
 *hash_table_get - function
 *@ht: V
 *@key: V
 *Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	long int index;

	if (key == NULL)
	{
		return (NULL);
	}
	if (ht == NULL)
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	for (; node != NULL; node = node->next)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
	return (NULL);
}
