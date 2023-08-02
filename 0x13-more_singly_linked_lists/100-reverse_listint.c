#include <stdlib.h>
#include "lists.h"
/**
 * *reverse_listint -  reverses a listint_t linked list
 * @head: Head of list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *front, *behind;

	if (head == NULL || *head == NULL)
		return (NULL);
	behind = NULL;

	while ((*head)->next != NULL)
	{
		front = (*head)->next;
		(*head)->next = behind;
		behind = *head;
		*head = front;
	}
	(*head)->next = behind;

	return (*head);
}
