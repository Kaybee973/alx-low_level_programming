#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add new node at end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: integer
  * Return: address of new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
	*head = add;
		return (add);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = add;
	return (add);
}
