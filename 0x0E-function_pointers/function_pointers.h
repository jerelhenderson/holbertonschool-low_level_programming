#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/*standard libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* functions */
void print_name(char *name, void(*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
