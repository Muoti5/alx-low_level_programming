#include "lists.h"

/**
 * listint_len - This function returns the number of elemnts in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
