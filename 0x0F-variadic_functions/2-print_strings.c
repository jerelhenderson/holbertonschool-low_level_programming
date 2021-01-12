#include "variadic_functions.h"


/**
 * print_strings - print given strings
 *
 * @separator: string between strings
 * @n: number of given strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char*);

		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(args);
	putchar('\n');
}
