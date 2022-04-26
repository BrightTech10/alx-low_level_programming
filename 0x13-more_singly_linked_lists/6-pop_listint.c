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

if (temp == NULL)
return (0);

temp = *head;
value = temp->n;

temp = temp->next;
free(*head);
*head = temp;

return (value);
}
