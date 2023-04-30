#include <stdio.h>
#include "lists.h"

/**
 * lisstint_len - returns number in a linked lists
 * @h: list type of to traverse
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
