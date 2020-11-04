#include "holberton.h"


char *mover(char *string);
int comparer(char *beg, char *end);

/**  
  * is_palindrome - checks if string is a palindrome
  *
  * @s: given string
  * Return: result of `comparer` function
  */
int is_palindrome(char *s)
{
	char *last = s;

	return (comparer(s, mover(last) - 1));
}

/**
  * mover - function moves pointer to end of string
  *
  * @string: given string
  */
char *mover(char *string)
{
	if (*string != '\0')
		return (mover(++string));
	return (string);
}

/**
  * comparer - compares each character in string
  *
  * @beg: pointer to beginning char of string
  * @end: pointer to end char of string
  * Return: 1 if palindrome, 0 if not
  */
int comparer(char *beg, char *end)
{
	if (*beg != *end)
		return (0);
	if (beg > end || beg == end)
		return (1);
	return (comparer(++beg, --end));
}
