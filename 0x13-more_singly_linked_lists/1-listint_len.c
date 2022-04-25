#include <stdio.h>
#include "lists.h"

/**
 * listint_len - computes the number of elements in a list
 * @h: pointer to node
 *
 * Description: count represents the number
 * of nodes (elements) in the list
 * Return: returns count
 */
size_t listint_len(const listint_t *h)
{
    size_t count;

    count = 0;
    while (h != NULL)
    {
        h = h->next;
        count++;
    }
    return (count);
}
