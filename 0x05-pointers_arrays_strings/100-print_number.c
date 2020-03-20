#include "holberton.h"


/**
 * print_number - print int using _putchar
 *
 * @n: given input
 */
void print_number(int n)
{
        int place;
        int tmp;
        int rev_num;
        int num;

        place = 1;
        tmp = n;
        rev_num = 0;
        num = 0;

	if (n == 0)
		_putchar(n + '0');

        if (n < 0)
        {
                _putchar('-');
                n = n * -1;
        }

        while (tmp != 0)
        {
                rev_num = n / place % 10;
                num = num + rev_num;
                place = place * 10;
                tmp = tmp / 10;
        }
}
