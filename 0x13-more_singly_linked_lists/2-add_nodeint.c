#include <stdio.h>
#include "liste.h>

/**
 * add_nodeint - adds node at the beginning of linked list
 * @head: pointer to the node
 * @n: data to insert
 * Return: pointer to node, or NULL if fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t))
		if (!new)
			return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
