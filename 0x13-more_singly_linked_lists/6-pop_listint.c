#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a list and returns  head node data
 * @head: Head of list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);
	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmp);
	return (data);
}
