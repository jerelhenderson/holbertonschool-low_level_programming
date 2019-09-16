#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - print sizes
 *
 * Description: This c program will output sizes of types.
 * Return: 0
 */
int main(void)
{
	char korpar[] = "and that piece of is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, korpar, strlen(korpar));
	return (1);
}
