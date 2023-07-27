#include "lists.h"

/**
 * list_len - return the number of elements in a linked list_t list.
 * @h: pointer to the head of the list.
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t length;

	length = 0;

	while (h)
	{
		h = h->next;
		length++;
	}
	return (length);
}
