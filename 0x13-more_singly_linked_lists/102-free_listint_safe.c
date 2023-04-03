#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: pointer to pointer to the head of the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
    size_t count = 0;
    listint_t *current = *h, *next;

    while (current)
    {
        count++;
        next = current->next;
        free(current);
        current = next;

        if (current == *h)
        {
            *h = NULL;
            break;
        }
    }

    return (count);
}

