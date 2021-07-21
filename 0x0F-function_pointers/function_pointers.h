#ifndef _FUNCTION_POINTERS_H_
#define _FUNCTION_POINTERS_H_

#include <stdlib.h>

int _putchar(char c);
/**
 * _putchar - writes the character c to stdout
 */

void print_name(char *name, void (*f)(char *));
/**
 * function that prints a name.
 */

void array_iterator(int *array, size_t size, void (*action)(int));
/**
 *function that executes a function given as a parameter on each element of an array.
 */

int int_index(int *array, int size, int (*cmp)(int));
/**
 * function that searches for an integer.
 */


#endif
