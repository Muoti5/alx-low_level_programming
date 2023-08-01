#include "lists.h"

/**
 * pop_listint - function with one arguement
 * @head: pointer to head pointer of list
 * Description: deletes the head node of linked list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	int num = 0;
	listint_t *node;

	if (*head == NULL)
		return (0);
	num = (*head)->n;
	node = *head;
	*head = (*head)->next;
	free(node);

	return (num);
}
