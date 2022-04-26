#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: pointer to the first node
 *
 * Description: the function also sets head to NULL
 */
void free_listint2(listint_t **head)
{
listint_t *oldNode, *newNode;
oldNode = *head;
newNode = *head;
*head = NULL;
while (newNode != NULL)
{
newNode = newNode->next;
free(oldNode);
oldNode = newNode;
}
}
