#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the linked list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t count = 0;
    const listint_t *current = head, *prev = NULL;

    while (current)
    {
        printf("[%p] %d\n", (void *)current, current->n);
        count++;

        if (prev && prev < current)
            prev = current;

        current = current->next;

        if (prev && prev > current)
        {
            printf("-> [%p] %d\n", (void *)current, current->n);
            break;
        }
    }

    if (!current)
        return (count);

    fprintf(stderr, "Error: linked list has a loop\n");
    exit(98);
}

