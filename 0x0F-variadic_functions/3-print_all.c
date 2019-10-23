#include "variadic_functions.h"

/**
 * print_all - print anything
 *
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", print_character},
		{"i", print_number},
		{"f", print_float},
		{"s", print_string},
		{'\0'}
	};
	int itr1, itr2;
	va_list arguments;
	char *separator;

	va_start(arguments, format);
	itr1 = 0;
	separator = ", ";

	while (format[itr1] != '\0')
	{
		itr2 = 0;
		while (types[itr2].type != '\0')
		{
			if (format[itr1] == *(types[itr2].type))
			{
				types[itr2].f(arguments);
				if ((format[itr1 + 1]) != '\0')
					printf("%s", separator);
			}
			itr2++;
		}
		itr1++;
	}
	printf("\n");
	va_end(arguments);
}

/**
 * print_character - print character
 *
 * @arguments: structure definitions
 */

void print_character(va_list arguments)
{
	printf("%c", va_arg(arguments, int));
}

/**
 * print_number - print number
 *
 * @arguments: structure definition
 */

void print_number(va_list arguments)
{
	printf("%d", va_arg(arguments, int));
}

/**
 * print_string - print string
 *
 * @arguments: structure definition
 */

void print_string(va_list arguments)
{
	char *str;

	str = va_arg(arguments, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_float - print string
 *
 * @arguments: structure definition
 */

void print_float(va_list arguments)
{
	printf("%f", va_arg(arguments, double));
}
