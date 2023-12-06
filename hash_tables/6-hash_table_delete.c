#include "hash_tables.h"
/**
 * hash_table_delete - Deletes a hash table.
 * @ht: The hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *c, *temp;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		c = ht->array[i];
		while (c != NULL)
		{
			temp = c->next;
			free(c->key);
			free(c->value);
			free(c);
			c = temp;
		}
	}
	free(ht->array);

	free(ht);
}
