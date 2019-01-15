#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table; in case of collision:
 * new node is added to beginning of the list
 * @ht: hash table to be update
 * @key: key
 * @value: value associated with key
 * Return: 1 if it is succeeded; 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int k_idx = 0;
	hash_node_t *tmp, *head, *new_node;

	if (key == NULL || strlen(key) <= 0 || ht == NULL || value == NULL)
		return (0);
	k_idx = key_index((const unsigned char *)key, ht->size);
	head = tmp = ht->array[k_idx];

	while (tmp != NULL && tmp->key != NULL)
	{
		/* if there is a matching key, update the value */
		if (strcmp(key, tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
		tmp = tmp->next;
	}
	/* if no match, add new key:value to head of linked list */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = head;
	ht->array[k_idx] = new_node;
	return (1);
}
