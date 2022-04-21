#include "lists.h"

/**
 * print_list - function to print all elements in a list
 * @h: pointer to list
 *
 * Description: this function prints all elements in a list
 * and returns the number of nodes
 * Return: returns number of nodes
 */

size_t print_list(const list_t *h)
{
size_t int count;

count = 0;
while (h != NULL)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", (h->len), (h->str));

h = h->next;
count++;
}

return (count);
}
