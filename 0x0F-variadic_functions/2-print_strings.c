#include "variadic_functions.h"

/**
 * print_strings - print strings
 *
 * @separator: string between strings
 * @n: number of strings
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int itr;
	char *string;

	itr = 0;
	va_start(arguments, n);

	while (itr < n)
	{
		string = va_arg(arguments, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && itr != (n - 1))
			printf("%s", separator);
		itr++;
	}
	va_end(arguments);
	putchar('\n');
}
