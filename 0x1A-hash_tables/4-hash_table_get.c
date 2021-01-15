#include "hash_tables.h"
/**
 * *hash_table_get - retrieves a value associated with a key.
 * @ht: hash table to look
 * @key: key
 * Return: NULL or value of the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;

	index = 0;
	if (!ht || !key)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (tmp)
	{
		while (tmp && strncmp(tmp->key, key, strlen(key)) != 0)
			tmp = tmp->next;
		return (tmp != NULL ? tmp->value : NULL);
	}
	return (NULL);
}
