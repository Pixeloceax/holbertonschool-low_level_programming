#include "hash_tables.h"
/**
 *hash_table_print - function
 *@ht: V
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int index, index_2;
	printf("{");
	if (ht != NULL)
	{
		for (index = 0; index < ht->size; index++)
		{
			node = ht->array[index];
			while (node != NULL)
			{
				if (index_2 != 0)
				{
					printf(", ");
					index_2 = 1;
				}
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
			}
		}
	}
	printf("}\n");
}
