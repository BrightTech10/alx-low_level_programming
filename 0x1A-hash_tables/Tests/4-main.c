#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int index;
	char *value;

	ht = hash_table_create(1024);
	hash_table_set(ht, "mentioner", "fun");
	hash_table_set(ht, "hetairas", "awesome");
	hash_table_set(ht, "Bob", "and Kris love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Cool");
	hash_table_set(ht, "98", "Battery Street");
	hash_table_set(ht, "c", "isfun");

	value = hash_table_get(ht, "hetairas");
	index = key_index((unsigned char *)"hetairas", ht->size);
	printf("%lu: %s:%s\n", index, "hetairas", value);
	value = hash_table_get(ht, "Bob");
	printf("%s:%s\n", "Bob", value);
	value = hash_table_get(ht, "N");
	printf("%s:%s\n", "N", value);
	value = hash_table_get(ht, "Asterix");
	printf("%s:%s\n", "Asterix", value);
	value = hash_table_get(ht, "Betty");
	printf("%s:%s\n", "Betty", value);
	value = hash_table_get(ht, "98");
	printf("%s:%s\n", "98", value);
	value = hash_table_get(ht, "mentioner");
	index = key_index((unsigned char *)"mentioner", ht->size);
	printf("%lu: %s:%s\n", index, "mentioner", value);
	value = hash_table_get(ht, "javascript");
	printf("%s:%s\n", "javascript", value);
	return (EXIT_SUCCESS);
}
