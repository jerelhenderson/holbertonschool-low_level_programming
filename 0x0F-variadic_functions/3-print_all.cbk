#include "variadic_functions.h"


/**
 * print_all - prints anything given
 *
 * @format: types of passed args
 */
void print_all(const char * const format, ...)
{
	types_t types[] = {
		{"c", print_char},
		{"i", print_num},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	va_list args;
	char *sep = "";

	va_start(args, format);
	i = 0;

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (types[j].type != NULL)
		{
			if (format[i] == *(types[j].type))
			{
				printf("%s", sep);
				types[j].f(args);
				if ((format[i + 1]) != '\0')
					sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

/**
 * print_string - prints string
 *
 * @args: received argument from `va_list`
 */
void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);

	if (str == NULL)
		printf("(nil)");
	printf("%s", str);
}

/**
 * print_num - prints number
 *
 * @args: received argument from `va_list`
 */
void print_num(va_list args)
{
	printf("%d", va_arg(args, int));
}



/**
 * print_char - prints character
 *
 * @args: received argument from `va_list`
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}


/**
 * print_float - prints float
 *
 * @args: received argument from `va_list`
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
