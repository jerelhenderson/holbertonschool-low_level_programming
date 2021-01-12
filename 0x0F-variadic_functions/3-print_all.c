#include "variadic_functions.h"


/**
 * print_all - types anything given
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
	 va_list args;
	 int i, j;
	 char *sep;

	 va_start(args, format);
	 sep = "";
	 i = 0;
	 while (format != NULL && format[i] != '\0')
		 {
			 j = 0;
			 while (types[j].type != NULL)
				 {
					 /* only compare current format with types type once */
					 if (format[i] == *(types[j].type))
						 {
							 printf("%s", sep);
							 types[j].f(args);
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
 * print_string - types string
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
 * print_num - types number
 *
 * @args: received argument from `va_list`
 */
void print_num(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_char - types character
 *
 * @args: received argument from `va_list`
 */
void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_float - types float
 *
 * @args: received argument from `va_list`
 */
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}
