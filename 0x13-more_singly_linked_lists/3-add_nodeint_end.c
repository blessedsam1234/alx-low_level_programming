#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of the linked list
 * @head: pointer to a pointer to the beginning of the linked list
 * @n: data to be added to the linked list
 * Return: pointer to the new node or NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}
	return (*head);
}
