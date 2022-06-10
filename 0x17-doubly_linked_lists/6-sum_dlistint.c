#include "lists.h"

/**
 * sum_dlistint - computes sum of all the data(n) of a linked list
 *
 * @head: node pointer
 * Return: returns the sum of data(n)
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp;
	int sum;

	if (head == NULL)
		return (0);

	temp = head;
	sum = 0;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
