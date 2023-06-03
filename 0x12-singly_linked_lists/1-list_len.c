#include "lists.h"

/**
* list_len - a function that returns the number
*  of elements in a linked list_t list
* @h: struct
* Return: number of elements in linked list_t list.
*/
size_t list_len(const list_t *h)
{
	int len = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
