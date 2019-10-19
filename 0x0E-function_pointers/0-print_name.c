#include "function_pointers.h"


/**
 * print_name - function that prints name
 *
 * @name: pointer to character
 * @f: pointer to function
 * Return: check for NULL
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	(*f)(name);
}
