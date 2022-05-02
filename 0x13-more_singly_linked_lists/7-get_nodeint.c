#include "lists.h"

/**
 * get_nodeint_at_index - computes nth node of a list
 * @head: pointer to the first node
 * @index: position of node beginning from 0
 *
 * Return: returns NULL if node doesn't exist
 * else the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;
listint_t *temp;

if (head != NULL)
{
temp = head;

count = 0;
while (temp != NULL)
{
if (count == index)
return (temp);

temp = temp->next;
count++;
}
}

return (NULL);
}
