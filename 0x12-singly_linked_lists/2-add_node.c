#include "lists.h"
/**
 * add_node - adds a new node at the beginning
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node(list_t **head, const char *str)
{
    list_t *latest;
    size_t n;

    latest = malloc(sizeof(list_t));
    if (new == NULL)
        return (NULL);

    latest->str = strdup(str);

    for (n = 0; str[n]; n++)
        ;

    latest->len = n;
    latest->next = *head;
    *head = latest;

    return (*head);
}
