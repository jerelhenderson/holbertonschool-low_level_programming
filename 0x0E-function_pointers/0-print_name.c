#include "function_pointers.h"


/**
 * print_name - function prints name
 *
 * @name: "name" to copy
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
