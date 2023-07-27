#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Print elements of a linked list.
 * @h: Pointer to the head of the list.
 * Return: Number of nodes.
 *
 * Description: Traverse the linked list and print each node's content and length.
 * Print "[0] (nil)" for NULL strings.
 */
size_t print_list(const list_t *h)
{
    int count = 0; // Initialize node count.

    while (h)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n"); // Format for NULL strings.
        else
            printf("[%d] %s\n", h->len, h->str); // Format for non-NULL strings.

        count++; // Increment node count.
        h = h->next; // Move to the next node.
    }

    return (count); // Return node count.
}

