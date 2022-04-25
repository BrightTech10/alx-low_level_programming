#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of list
 * @head: pointer to head node
 * @n: integer value
 *
 * Description: the new node is made to point to previous
 * nodes while head node points to the new node
 * Return: returns address to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;
newNode = malloc(sizeof(listint_t));
if (newNode == NULL)
return (1);

newNode->n = n;
newNode->next = *head;
*head = newNode;

return (*head);
}
