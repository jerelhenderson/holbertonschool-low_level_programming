 #include <stdio.h>


/**
 * main - putchar function
 *
 * Description: prints alphabet in lowercase, w/o 'q' and 'e'
 * Return: 0
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha != 'z' + 1)
	{
		if (alpha == 'q' || alpha == 'e')
			alpha++;
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
