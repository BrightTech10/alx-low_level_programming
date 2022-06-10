#include "lists.h"

/**
 * get_dnodeint_at_index - get node at specified index
 *
 * @head: node pointer
 * @index: position of node in the list
 * Return: returns the nth, NULL if it doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	size_t i;

	if (head == NULL)
		return (NULL);

	temp = head;
	i = 0;
	while (i < index && temp)
	{
		i++;
		temp = temp->next;
	}
	return (temp);
}
