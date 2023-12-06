#include "hash_tables.h"
/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table to look into
 * @key: The key to search for
 * Return: The value associated with the key,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *cn;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}

	i = key_index((unsigned char *)key, ht->size);

	for (cn = ht->array[i]; cn != NULL; cn = cn->next)
	{
		if (strcmp(cn->key, key) == 0)
		{
			return (cn->value);
		}
	}

	return (NULL);
}
