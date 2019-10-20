#include "3-calc.h"


/**
 * get_op_func - pointer to function
 *
 * @s: program argument
 * Return: pointer to function of correspending operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op != NULL)
		if (*(ops[i].op) == *s)
			return (ops[i].f);
	return (NULL);
}
