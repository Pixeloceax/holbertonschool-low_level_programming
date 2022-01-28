#include "hash_tables.h"
/**
 *hash_table_set - function
 *@ht: V
 *@key: V
 *@value: V
 *Return: int
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long index, size;
	hash_node_t *node = malloc(sizeof(hash_node_t));

	if (ht  == NULL)
	{
		return (0);
	}
	if (key == NULL)
	{
		return (0);
	}
	if (value == NULL)
	{
		return (0);
	}
	if (node == NULL)
	{
		return (0);
	}
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
