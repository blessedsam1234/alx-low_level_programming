#include "lists.h"
/**
 * get_nodeint_at_index - returns the node of a particular index
 * @head: firstt node in the list
 * @index: index of the node to return to.
 * Return: pointers to the node we are looking for
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
