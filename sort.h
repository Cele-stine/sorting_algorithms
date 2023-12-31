#ifndef HEADER_FILE
#define HEADER_FILE

#include <stdlib.h>


/*Comparison direction macros for bitonic sort.*/
#define UP 0
#define DOWN 1

/**
 * enum bool - Enumerate bool values.
 * @false: Equals to 0
 * @true: Equals to 1
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void print_list(const listint_t *list);
void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void swap_int(int *a, int *b);
void insertion_sort_list(listint_t **list);
void swap_selection(int *i, int *j);
void selection_sort(int *array, size_t size);
void insert_swap(listint_t **head, listint_t **n1, listint_t *n2);
#endif
