#include "hash_tables.h"

/**
 * hash_table_set - adds or update an element to the hash table
 *
 * @ht : pointer to hash table
 * @key: key - cannot be empty
 * @value: value assoiciated with key
 * Return: returns 1 if successful, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *slot_entry, *prev;

	if (ht == NULL || key == '\0' || value == NULL)
		return (0);

	/* get the index */
	index = key_index((const unsigned char *)key, ht->size);

	slot_entry = ht->array[index];
	if (!slot_entry)
	{
		/* insert directly */
		ht->array[index] = hash_table_node(key, value);
		return (1);
	}

	while (slot_entry != NULL)
	{
		/* to update value */
		if  (strcmp(slot_entry->key, key) == 0)
		{
			free(slot_entry->value);
			strcpy(slot_entry->value, value);
			return (1);
		}
		prev = slot_entry;
		slot_entry = prev->next;
	}
	prev->next = hash_table_node(key, value);
	return (1);
}

/**
 * hash_table_node - creates a hash table node (entry)
 * based on key/value pair
 *
 * @key: key
 * @value: key value
 * Return: returns node
 */
hash_node_t *hash_table_node(const char *key, const char *value)
{
	/* Creates a pointer to hash table node */
	hash_node_t *node = malloc(sizeof(hash_node_t));

	node->key = malloc(sizeof(strlen(key)) + 1);
	node->value = malloc(sizeof(strlen(value)) + 1);

	strcpy(node->key, key);
	strcpy(node->value, value);

	node->next = NULL;

	return (node);
}
