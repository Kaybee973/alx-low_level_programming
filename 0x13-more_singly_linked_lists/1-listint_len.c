#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 *
 * @h: head node
 *
 * Return: the len
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
	h = h->next;
		len++;
	}
	return (len);
}
