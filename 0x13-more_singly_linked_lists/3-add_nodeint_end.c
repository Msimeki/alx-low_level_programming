#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to the head of the linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new_node = malloc(sizeof(listint_t));
    listint_t *last = *head;

    if (new_node == NULL) // Memory allocation failed
        return NULL;

    new_node->n = n;
    new_node->next = NULL;

    if (*head == NULL) // If the list is empty
    {
        *head = new_node;
    }
    else
    {
        while (last->next != NULL)
            last = last->next;
        
        last->next = new_node;
    }

    return new_node;
}

