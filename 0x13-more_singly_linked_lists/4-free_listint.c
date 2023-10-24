#include "lists.h"

/**
 * free_listint - frees a listint list.
 * @head: A pinter to the head of the list_list to be freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
		temp = head->next;
	free(head);
	head = temp;
}
