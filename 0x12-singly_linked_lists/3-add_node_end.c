#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * of a list_t list.
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
    list_t *l, *temp;
    size_t n;

    l = malloc(sizeof(list_t));
    if (l == NULL)
        return (NULL);

    l->str = strdup(str);

    for (n = 0; str[n]; n++)
        ;

    l->len = n;
    l->next = NULL;
    temp = *head;

    if (temp == NULL)
    {
        *head = l;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        temp->next = l;
    }

    return (*head);
}
