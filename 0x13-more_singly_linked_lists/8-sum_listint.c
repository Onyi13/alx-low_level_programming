#include "lists.h"
/**
* sum_listint - Sums all data of a listint_t list.
* @head: Pointer to the head of the list.
* Return: The sum of all the data (n) or 0 if list is empty.
*/
int sum_listint(listint_t *head)
{int sum = 0;
while (head)
{sum += head->n;
head = head->next; }
return (sum); }
