#include "lists.h"

/**
 * pop_listint - frees list
 * @head: double pointer to the first node
 * Return: returns head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value;

temp = *head;
value = temp->n;

if (temp == NULL)
return (0);

temp = temp->next;
free(*head);
*head = temp;

return (value);
}
