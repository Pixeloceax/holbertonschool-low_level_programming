#include "hash_tables.h"
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *hash, *temp;
	unsigned long int cont = 0;

	for (cont = 0; cont < ht->size; cont++)
	{
		hash = ht->array[cont];
		while (hash != NULL)
		{
			temp = hash;
			hash = hash->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
		free(ht->array);
		free(ht);
}