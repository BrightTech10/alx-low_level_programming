#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *slot_entry;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		slot_entry = ht->array[i];
		if (ht->array[i] != NULL)
		{

			printf("%s'%s': '%s'", sep, slot_entry->key, slot_entry->value);
			slot_entry = slot_entry->next;
			sep = ", ";
		}
	}
	printf("}\n");
}
