#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct functions_list - list of functions to print
 *
 * @type: structure member
 * @f: structure definition
 */

typedef struct functions_list
{
	char *type;
	void (*f)();
} types_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_character(va_list arguments);
void print_number(va_list arguments);
void print_float(va_list arguments);
void print_string(va_list arguments);
void print_all(const char * const format, ...);


#endif
