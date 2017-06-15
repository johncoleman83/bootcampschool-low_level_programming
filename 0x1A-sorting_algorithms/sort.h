#ifndef SORT_H
#define SORT_H
#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to prev element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

/* swap int function used in every file */
void swap_int(int *a, int *b);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void swap_insert(listint_t *pn, listint_t *tmp, listint_t *nn, listint_t **l);
void selection_sort(int *array, size_t size);

/* quick sort v. 1 */
void quick_sort(int *array, size_t size);
void partition(int *wall, int *pivot, int *a, size_t s);

#endif /* SORT_H */
