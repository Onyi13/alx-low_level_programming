#include "lists.h"
#include <stdlib.h>
/**
*delete_nodeint_at_index - Deletes node at given index.
*@head: Double pointer to head of list.
*@index: Index to delete node at.
*Return: 1 if success, -1 if failure.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{listint_t *current_node = *head, *temp_node;
unsigned int i;
if (!*head)
return (-1);
if (index == 0)
{*head = current_node->next;
free(current_node);
return (1); }
for (i = 1; i < index && current_node->next; i++)
current_node = current_node->next;
if (!current_node->next)
return (-1);
temp_node = current_node->next;
current_node->next = temp_node->next;
free(temp_node);
return (1); }
