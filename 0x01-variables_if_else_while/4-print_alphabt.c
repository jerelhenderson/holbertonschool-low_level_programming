 #include <stdio.h>


/**
 * main - Incoming
 *
 * Description: Prints the alphabet in lowercase.
 * Return: 0
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'q' && a != 'e')
		{
		putchar(a);
		a++;
		}
		else
		{
			a++;
		}

	}

	putchar('\n');
	return (0);
}
