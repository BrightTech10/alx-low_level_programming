#include "lists.h"

/**
 * free_list - free all the malloce'ed blocks
 * @head: pointer to the first node
 */

void free_list(list_t *head)
{
/*declare variables to be used*/
list_t *newNode, *oldNode;
/*set both pointers to address of head*/
newNode = head;
oldNode = head;
/*traverse the nodes and free the spaces*/
while (newNode != NULL)
{
newNode = newNode->next;/*ptr is now at the next address*/
free(oldNode->str);/*old frees the address at previous node*/
free(oldNode);
oldNode = newNode;/*old is set to next address*/
}
}