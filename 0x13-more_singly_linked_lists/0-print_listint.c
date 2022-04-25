#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints the elements in a list
 * @h: pointer to element
 *
 * Description: count represents the number
 * of nodes in the lists
 * Return: returns count
 */
size_t print_listint(const listint_t *h)
{
        size_t count;

        count = 0;
        while (h != NULL)
        {
                printf("%d\n", h->n);
                h = h->next;
                count++;
        }
        return (count);
}
