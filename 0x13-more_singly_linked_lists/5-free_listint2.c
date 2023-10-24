#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: The pointer to the first address of the listint_t list
 * Description: sets the head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
	return;

	while (*head)
{
	temp = (*head)->next;
	free(*head);
	*head = temp;
}
*head = NULL;
}
