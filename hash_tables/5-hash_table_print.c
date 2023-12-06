#include "hash_tables.h"
/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *c = ht->array[i];

		while (c != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", c->key, c->value);
			flag = 1;
			c = c->next;
		}
	}
	printf("}\n");
}
