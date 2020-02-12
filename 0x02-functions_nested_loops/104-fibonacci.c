#include <stdio.h>


void comma_space(void);

/**
 * main - Fibonacci sequencer
 *
 * Description: prints first fifty Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int num = 1;
	unsigned long int curr = 1;
	unsigned long int prev = 1;
	int count = 1;

	while (count < 93)
	{
		printf("%lu", num);
		prev = curr;
		curr = num;
		num = curr + prev;
		if (count != 92)
			comma_space();
		count++;
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
