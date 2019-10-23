#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 *
 * @separator: string between numbers
 * @n: integers passed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int itr;

	itr = 0;
	va_start(arguments, n);

	while (itr < n)
	{
		printf("%d", va_arg(arguments, int));
		if (separator != NULL && itr != (n - 1))
			printf("%s", separator);
		itr++;
	}
	va_end(arguments);
	putchar('\n');
}
