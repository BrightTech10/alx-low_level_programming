#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the end of list
 *
 * @head: double pointer to node
 * @n: data(n) for new node
 * Return: returns address of new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tail;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
		new->prev = tail;
		tail = new;
	}
	return (tail);
}
