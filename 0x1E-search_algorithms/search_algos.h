#ifndef SEARCH_ALGO
#define SEARCH_AGLO
#include <stdlib.h>
#include <stdio.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
void print_away(int *array, size_t start, size_t end);
#endif
