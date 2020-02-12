#include "holberton.h"


void comma_space(void);

/**
 * main - Fibonacci sequencer
 *
 * Description: prints first fifty Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int num = 1;
	int curr = 1;
	int prev = 1;

	while (num < 50)
	{
		printf("%d", num);
		prev = curr;
		curr = num;
		num = curr + prev;
		if (num < 50)
			comma_space();
	}
	putchar('\n');
	return (0);
}


/**
* comma_space - print function
*
* Description: prints comma and space
*/
void comma_space(void)
{
	printf(", ");
}
