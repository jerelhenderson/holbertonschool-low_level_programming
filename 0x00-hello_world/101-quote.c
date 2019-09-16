 #include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Incoming
 *
 * Description: Prints a string w/o printf or puts
 * Return: 1
 */
int main(void)
{
	char str[] = "and that piece of is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str, strlen(str));

	return (1);
}
