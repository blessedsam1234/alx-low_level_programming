#include "lists.h"
/**
 *add_node -  Adds node at the beginning
 *@head: This is the head of the node
 *@str: This is the string to store
 *Return: Null if failed or address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int j, count = 0;
	
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (j = 0; str[j] != '\0'; j++)
		count++;
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}



