#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value to
 * @key: The key (cannot be an empty string)
 * @value: The value associated with the key (must be duplicated)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *nn, *c;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	i = key_index((unsigned char *)key, ht->size);
	c = ht->array[i];
	while (c != NULL)
	{
		if (strcmp(c->key, key) == 0)
		{
			free(c->value);
			c->value = strdup(value);
			if (c->value == NULL)
				return (c->value ? 1 : 0);
		}
	}
	nn = malloc(sizeof(hash_node_t));
	if (nn == NULL)
		return (0);
	nn->key = strdup(key);
	nn->value = strdup(value);
	if (nn->key == NULL || nn->value == NULL)
	{
		free(nn->key);
		free(nn->value);
		free(nn);
		return (0);
	}
	nn->next = ht->array[i];
	ht->array[i] = nn;

	return (1);
}
