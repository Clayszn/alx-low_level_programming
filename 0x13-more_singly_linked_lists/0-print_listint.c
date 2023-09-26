#include "lists.h"

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *temp;

	int len = 0;

	temp = h;

	if (temp == NULL)
		return ((size_t)(NULL));

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		len++;
	}

	return (len);
}
