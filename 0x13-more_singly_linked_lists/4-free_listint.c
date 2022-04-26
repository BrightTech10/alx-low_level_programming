#include "lists.h"

/**
 * free_listint - frees list
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
listint_t *temp;
temp = head;

while (temp->next != NULL)
{
temp = temp->next;
}
free(temp);
}
