#ifndef FUNCTION_POINTER_H
#define FUNCTION_POINTER_H

#include <stddef.h>
#include <stdlib.h>

void print name(char *name, void(*f)(char *));
int _putchar(char c);
void array_iterator(int *array, size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));

#endif
