#include "lists.h"

/**
 * add_nodeint_end - function with two arguments
 * @head: double pointer to head of first linked list
 * @n: integer value of data in node
 * Description: add a new node at the end of linked list
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *cursor;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->next = NULL;
	node->n = n;

	if (*head)
	{
		cursor = *head;
		while (cursor->next != NULL)
			cursor = cursor->next;
		cursor->next = node;
	}
	else
		*head = node;
	return (node);
}
