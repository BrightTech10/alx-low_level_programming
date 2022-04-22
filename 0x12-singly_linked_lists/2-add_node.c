#include "lists.h"

/**
 * add_node - add new node at the beginnning of a list
 * @head: double pointer to head node
 * @str: string variable
 * Return: returns number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
/* first duplicate string variable */
char *dup;
dup = strdup(str);

/* Create new node to store new values; */
/* Allocate memory to new node */
list_t *newNode;
newNode = malloc(sizeof(list_t));
if(newNode == NULL)
printf("SegError!\n");

/* Assign new values to new node */
newNode->str = dup;
newNode->len = strlen(dup);
/* newNode is added at the beginning */
newNode->next = *head;
/* head now points to newNode */
*head = newNode;

}