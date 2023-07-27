#include "lists.h"

/**
 * print_list - Print a linked list
 * @h: pointer to the first element of the list
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t numberofnodes;

	numberofnodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[%u] (nil)\n", 0);
			numberofnodes++;
			h = h->next;
			continue;
		}
		printf("[%u] %s\n", h->len, h->str);
		numberofnodes++;
		h = h->next;
	}
	return (numberofnodes);
}
