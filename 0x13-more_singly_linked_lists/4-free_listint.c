#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
listint_t *oldNode, *newNode;
oldNode = head;
newNode = head;

while (newNode != NULL)
{
newNode = newNode->next;
free(oldNode);
oldNode = newNode;
}
}
