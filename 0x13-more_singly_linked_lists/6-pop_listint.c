#include "lists.h"

/**
 * pop_listint - deletes head node of a list
 * @head: double pointer to the first node
 * Return: returns head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *temp;
int value;

temp = *head;

if (temp == NULL)
return (0);

value = temp->n;
temp = temp->next;

free(*head);
*head = temp;

return (value);
}
