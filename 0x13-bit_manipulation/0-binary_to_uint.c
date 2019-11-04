#include "holberton.h"

/**
 * binary_to_uint - convert binary to integer
 *
 * @b: binary string
 * Return: converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num;

	num = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '1')
			num = (num << 1) | 1;
		else if (*b == '0')
			num = num << 1;
		else
			return (0);
		b++;
	}
	return (num);
}
