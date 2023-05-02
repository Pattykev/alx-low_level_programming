#include "lists.h"

/**
*listint_len - return the length of a linked list
*@h: the struct linked list to manipulate
*Return: size_t
*/

size_t listint_len(const listint_t *h)
{
	size_t elements = 1;

	/*return 0 as no of elements when h is NULL*/
	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		if (h->n != '\0')
			elements++;
		h = h->next;
	}

	return (elements);
}
