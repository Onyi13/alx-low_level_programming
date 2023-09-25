#include <stdlib.h>
#include "lists.h"
/**
*insert_nodeint_at_index -
*Inserts a new node at a given position.
*@head: Double pointer to the first node.
*@idx: Index where the new node should be added.
*@n: Data for the new node.
*Return: The address of the new node
*or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{listint_t *new_node, *temp;
unsigned int i = 0;
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (!*head && idx == 0)
{*head = new_node;
return (new_node); }
if (!*head && idx > 0)
{free(new_node);
return (NULL); }
temp = *head;
while (temp && (i < idx - 1))
{temp = temp->next;
i++; }
if (!temp && i < idx - 1)
{free(new_node);
return (NULL); }
new_node->next = temp->next;
temp->next = new_node;
return (new_node); }
