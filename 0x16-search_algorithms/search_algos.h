#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stddef.h>
#include <stdio.h>

void print_array(int *array, size_t size);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int binarySearch(int arr[], int l, int r, int x);
#endif
