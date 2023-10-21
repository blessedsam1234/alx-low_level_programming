#include "lists.h"

/**
 * print_list - prints contents of the list.
 * @h: points to the eleent of the list to be printed
 * Really making  efforts to understand the topic
 * Return: printed number of nodes.
 */
size_t print_list(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[%d] (nil)\n", 0);
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}
return (count);
}
