#include "sort.h"
/**
 * insertion_sort_list - sorts doubly linked list in ascending order
 * @list: linked list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *temp;
	int n;

	if (!list)
		return;
	temp = *list;
	while (temp)
	{
		while (temp)
		{
			if (temp->next)
			{
				if (temp->n > temp->next->n)
				{
					n = temp->n;
					*(int *)&temp->n = temp->next->n;
					*(int *)&temp->next->n = n;
					temp = *list;
					print_list(*list);
					break;
				}
			}
			temp = temp->next;
		}
	}
}
