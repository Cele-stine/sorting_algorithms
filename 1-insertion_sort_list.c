#include "sort.h"
/**
 * insert_swap - A function to swap nodes using the insertion sort algorithm.
 * @*head: The head node
 * @*n1: node one
 * @n2: node two.
 */
void insert_swap(listint_t **head, listint_t **n1, listint_t *n2)
{
	(*n1) -> next = n2 -> next;
	if (n2 -> next != NULL)
		n2 -> next -> prev = *n1;
	n2 -> prev = (*n1) -> prev;
	n2 -> next = *n1;
	if ((*n1) -> prev != NULL)
		(*n1) -> prev -> next = n2;
	else
		*head = n2;
	(*n1) -> prev = n2;
	*n1 = n2 -> prev;
}
/**
 * insertion_sort_list - a function that sorts a doubly linked list of integers
 * using insertion sort algorithm.
 * @**list: The doubly liked list to sort.
 * Return: Nothing.
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *iter;
	listint_t *temp;
	listint_t *insert;

	if (list == NULL || (*list) == NULL || (*list) -> next == NULL)
		return;
	for (iter = (*list) -> next; iter != NULL; iter = temp)
	{
		temp = iter -> next;
		insert = iter -> prev;
		while (insert != NULL && iter -> n < insert -> n)
		{
			insert_swap(list, &insert, iter);
			print_list((const listint_t *)*list);
		}
	}
}
