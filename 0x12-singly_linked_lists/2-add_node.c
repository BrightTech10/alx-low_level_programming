#include "lists.h"

/**
 * add_node - add new node at the beginnning of a list
 * @head: double pointer to head node
 * @str: string variable
 * Return: returns number of nodes
 */

list_t *add_node(list_t **head, const char *str)
{
/* Declare variable to get length of str */
unsigned int len;
len = 0;
while (str[len] != '\0')
{
len++;
}

/* Create new node to store new values; */
/* and allocate memory to new node */
/* Return NULL is if memory allocation fails */
list_t *newNode;
newNode = malloc(sizeof(list_t));
if (newNode == NULL)
return (NULL);

/* Duplicate string and */
/* Assign values to new node */
newNode->str = strdup(str);
newNode->len = len;

/* add newNode at the beginning of list */
newNode->next = *head;
/* head now points to newNode */
*head = newNode;

}
