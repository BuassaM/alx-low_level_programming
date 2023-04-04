#include "lists.h"

/**
 * sum_listint -  listint_t data dum calculate
 * @head: listint_t node
 *
 * Return: sum 
 */
int sum_listint(listint_t *head)
{
int sum;
int sum = 0;
listint_t *tempstor = head;

while (tempstor)
{
if (head == NULL)
return (0);

sum += tempstor->n;
tempstor = tempstor->next;
}
return (sum);
}


