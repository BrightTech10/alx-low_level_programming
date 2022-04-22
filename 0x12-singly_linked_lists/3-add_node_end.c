#include "lists.h"

/**
 * add_node_end - add new node at the end of a list
 * @head: double pointer to head node
 * @str: string variable
 * Return: returns number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode, *temp;
unsigned int len;/* Declare variable to get length of str */
len = 0;
while (str[len] != '\0')
{
len++;
}

newNode = malloc(sizeof(list_t));/* allocate memory */
if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = len;
newNode->next = NULL;
if (*head == NULL)
*head = newNode;
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}
return (temp);
}