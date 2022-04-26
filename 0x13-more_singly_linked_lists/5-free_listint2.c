#include "lists.h"

/**
 * free_listint2 - frees list
 * @head: double pointer to the first node
 *
 * Description: the function also sets head to NULL
 */
void free_listint2(listint_t **head)
{
listint_t *oldNode, *newNode;

if (head != NULL)
{
oldNode = *head;
newNode = *head;
while (newNode != NULL)
{
newNode = newNode->next;
free(oldNode);
oldNode = newNode;
}
*head = NULL;
}
}
