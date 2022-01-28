#include "hash_tables.h"
/**
 *hash_table_print - function
 *@ht: V
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *hash;
	unsigned int index, index_2 = 0;

	if (ht != NULL)
	{
		printf("{");
		for (index = 0; index < ht->size; index++)
		{
			hash = ht->array[index];
			while (hash != NULL)
			{
				if (index_2 != 0)
				{
					printf(", ");
				}
				printf("'%s': '%s'", hash->key, hash->value);
				index_2 += 1;
				hash = hash->next;
			}
		}
		printf("}\n");
	}
}
