#include "holberton.h"


/**
 * rev_string - return reversed string
 *
 *@s: given string
 * Return: None
 */
void rev_string(char *s)
{
	int rev_cnt = 0;
	int fwd_cnt = 0;
	char tmp;

	while (s[rev_cnt] != '\0')
		rev_cnt++;
	rev_cnt--;
	while (rev_cnt > fwd_cnt)
	{
		tmp = s[fwd_cnt];
		s[rev_cnt] = s[rev_cnt];
		s[rev_cnt] = tmp;
		rev_cnt--;
		fwd_cnt++;
	}
}
