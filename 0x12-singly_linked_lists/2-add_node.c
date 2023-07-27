#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to the head of the linked list.
 * @str: the string
 * Return: pointer to the created node.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = (list_t *)malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);
	newnode->str = strdup(str);
	newnode->len = strlen(str);
	newnode->next = *head;
	*head = newnode;
	return (newnode);
}
