#include "hash_tables.h"
/**
 *hash_table_get - function
 *@ht: V
 *@key: V
 *Return: char*
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *hash;
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
	hash = ht->array[index];

	for (; hash != NULL; hash = hash->next)
	{
		if (strcmp(hash->key, key) == 0)
		{
			return (hash->value);
		}
	}
	return (NULL);
}
