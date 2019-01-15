#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: pointer to value; NULL if key couldn't be fund
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	if (key == NULL || strlen(key) <= 0 || ht == NULL)
		return (NULL);
	tmp = ht->array[key_index((const unsigned char *)key, ht->size)];

	while (tmp != NULL && tmp->key != NULL)
	{
		/* if there is a matching key, return the value */
		if (strcmp(key, tmp->key) == 0)
			return (tmp->value);
		tmp = tmp->next;
	}
	return (NULL);
}
