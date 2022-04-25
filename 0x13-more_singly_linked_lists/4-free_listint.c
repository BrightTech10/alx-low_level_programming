#include "lists.h"

/**
 * free_list - free all the malloce'ed blocks
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
/* declare variables to be used */
listint_t *newNode, *oldNode;

/* set both pointers to address of head */
newNode = head;
oldNode = head;

/* traverse the nodes and free the spaces */
while (newNode != NULL)
{
/* ptr is now at the next address */
newNode = newNode->next;
/* old frees the address at previous node */
free(oldNode->n);
free(oldNode);
/* old is set to next address */
oldNode = newNode;
}
}

