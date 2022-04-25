#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end of list
 * @head: pointer to head node
 * @n: integer value
 *
 * Description: the temp pointer is used to traverse
 * nodes
 * Return: returns address to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (1);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
*head = newNode;

else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newNode;
}

return (temp);
}
