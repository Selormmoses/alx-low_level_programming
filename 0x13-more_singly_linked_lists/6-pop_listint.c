#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - deletes node of a linked list
 * @head: pointer to element in the linked list
 * Return: the data inside elements deleted,
 * or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
