#include "lists.h"

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
} list_t;

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
const list_t *temp;
int count;

temp = h;

count = 0;
while (temp != NULL)
{
if (temp->str == NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%lu] %s\n", (temp->len), (temp->str));

temp = temp->next;
count++;
}

return (count);
}
