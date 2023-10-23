#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint - adds a nw node at the beginning of a  linked list.
 * @head: this points to the first node on the node list.
 * @n: data to be addeded in the new node
 *
 * Return: ointer to the new node, or NULL if it fails.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint int *new;


	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
