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
	hash_node_t *hash = malloc(sizeof(hash_node_t));

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
	if (hash == NULL)
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
	hash->key = strdup(key);
	hash->value = strdup(value);
	hash->next = ht->array[index];
	ht->array[index] = hash;
	return (1);
}
