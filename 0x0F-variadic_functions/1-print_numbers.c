#include "variadic_functions.h"


/**
 * print_numbers - prints given numbers
 *
 * @separator: string printed between numbers
 * @n: integers passed to function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
