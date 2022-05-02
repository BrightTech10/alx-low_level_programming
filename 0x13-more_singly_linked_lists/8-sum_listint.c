#include "lists.h"

/**
 * sum_listint - computes sum of all data in a list
 * @head: pointer to the first node
 *
 * Return: returns 0 if list doesn't exist
 * else the sum of data
 */

int sum_listint(listint_t *head)
{
listint_t *temp;
int sum;

if (head == NULL)
return (0);

if (head != NULL)
{
temp = head;

sum = 0;
while (temp != NULL)
{
sum = sum + temp->n;
temp = temp->next;
}
}
return (sum);
}
