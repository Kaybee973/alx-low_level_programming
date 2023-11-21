#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint - add new node at beginning of a listint_t list.
  * @head: double pointer head
  * @n: integer
  * Return: address of new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
