#include <stdlib.h>
#include "main.h"

/**
 * _realloc - This function reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc:
 * malloc(old_size)
 * @old_size: size in bytes of allocated space ptr
 * @new_size: new size in bytes of the new memory block.
 * Return: ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *r;
	char *ptr_new, *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		r = malloc(new_size);
		{
			if (r == NULL)
				return (NULL);
		}

		return (r);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_new = ptr;
	r = malloc(sizeof(*ptr_new) * new_size);
	if (r == NULL)
	{
		free(ptr);
		return (NULL);
	}

	p = r;

	for (a = 0; a < old_size && a < new_size; a++)
	{
		p[a] = *ptr_new++;
	}
	free(ptr);
	return (r);
}
