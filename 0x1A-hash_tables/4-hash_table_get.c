#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 *
 * @ht: pointer to hash table
 * @key: key
 * Return: returns value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *slot_entry;

	/* get the index of each slot */
	index = key_index((const unsigned char *)key, ht->size);

	slot_entry = ht->array[index];
	if (slot_entry == NULL)
		return (NULL);

	while (slot_entry != NULL)
	{
		/* check for matching keys and return if found */
		if (strcmp(slot_entry->key, key) == 0)
			return (slot_entry->value);

		slot_entry = slot_entry->next;
	}
	/* if no matching key is found */
	return (NULL);
}
