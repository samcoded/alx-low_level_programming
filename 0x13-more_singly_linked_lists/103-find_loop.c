#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to head of list
 * Return: address of node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a;
	listint_t *b;

	if (!head)
		return (NULL);
	a = b = head;
	while (b->next && (b->next)->next)
	{
		a = a->next;
		b = (b->next)->next;
		if (a == b)
		{
			a = head;
			while (a != b)
			{
				a = a->next;
				b = b->next;
			}
			return (b);
		}
	}
	return (NULL);
}
