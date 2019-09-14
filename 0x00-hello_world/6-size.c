#include <stdio.h>


/**
 * main - print sizes
 *
 * Description: This c program will output sizes of types.
 * Return: 0
 */
int main(void)
{
	puts("Size of a char: %zu byte(s)\n", sizeof(char));
	puts("Size of a int: %zu bytes(s)\n", sizeof(int));
	puts("Size of a long int: %zu byte(s)\n", sizeof(long int));
	puts("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	puts("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
