#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 *                           linked list
 * @head: double pointer to the head of the list
 * @index: index of the node that should be deleted, starting at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *next;
unsigned int i = 0;
if (!*head)
return (-1);

temp = *head;

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

while (temp && i < index - 1)
{
temp = temp->next;
i++;
}

if (!temp || !temp->next)
return (-1);

next = temp->next->next;
free(temp->next);
temp->next = next;

return (1);
}
