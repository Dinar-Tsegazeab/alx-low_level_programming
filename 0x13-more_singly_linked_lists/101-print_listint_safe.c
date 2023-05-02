#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current;
size_t count = 0;
const listint_t *prev = NULL;
const listint_t *next = NULL;

while (head != NULL && head > prev)
{
current = head;
next = current->next;

printf("[%p] %d\n", (void *)current, current->n);
count++;

prev = head;
head = next;
}

if (head != NULL)
{
printf("-> [%p] %d\n", (void *)head, head->n);
exit(98);
}

return (count);
}
