#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements list
 * @h: pointer to structure
 * Return: length.
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
