#include "lists.h"

/**
 * free_list - free all the malloce'ed blocks
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
/* declare variables to be used */
list_t *newNode, *oldNode;

/* set both pointers to address of head */
newNode = head;
oldNode = head;

/* traverse the nodes and free the spaces */
while (newNode != NULL)
{
/* ptr is now at the next address */
newNode = newNode->next;
/* old frees the address at previous node */
free(oldNode->str);
free(oldNode);
/* old is set to next address */
oldNode = newNode;
}
}