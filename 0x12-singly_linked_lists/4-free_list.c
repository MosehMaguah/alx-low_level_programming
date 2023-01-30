#include "lists.h"
#include <string.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the start of the list_t list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
